// -*- mode: c++; tab-width: 4; indent-tabs-mode: t; eval: (progn (c-set-style "stroustrup") (c-set-offset 'innamespace 0)); -*-
// vi:set ts=4 sts=4 sw=4 noet :
//
// Copyright 2010, 2011 wkhtmltopdf authors
//
// This file is part of wkhtmltopdf.
//
// wkhtmltopdf is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// wkhtmltopdf is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with wkhtmltopdf.  If not, see <http://www.gnu.org/licenses/>.


#include "imageconverter_p.hh"
#include "imagesettings.hh"
#include <QBuffer>
#include <QDebug>
#include <QEventLoop>
#include <QFileInfo>
#include <QImage>
#include <QObject>
#include <QObject>
#include <QPainter>
#include <QSvgGenerator>
#include <QUrl>
#include <QWebElement>
#include <QWebFrame>
#include <QWebPage>
#include <qapplication.h>
#include <QString>
#include <QDomDocument>

#ifdef Q_OS_WIN32
#include <fcntl.h>
#include <io.h>
#endif

namespace wkhtmltopdf {

ImageConverterPrivate::ImageConverterPrivate(ImageConverter & o, wkhtmltopdf::settings::ImageGlobal & s, const QString * data):
	settings(s),
	loader(s.loadGlobal, 96, true),
	out(o) {
	out.emitCheckboxSvgs(s.loadPage);
	if (data) inputData = *data;

	phaseDescriptions.push_back("Loading page");
	phaseDescriptions.push_back("Rendering");
	phaseDescriptions.push_back("Done");

	connect(&loader, SIGNAL(loadProgress(int)), this, SLOT(loadProgress(int)));
	connect(&loader, SIGNAL(loadFinished(bool)), this, SLOT(pagesLoaded(bool)));
	connect(&loader, SIGNAL(error(QString)), this, SLOT(forwardError(QString)));
    connect(&loader, SIGNAL(warning(QString)), this, SLOT(forwardWarning(QString)));
}

uint8_t ImageConverterPrivate::getFrameAt(const std::pair<int, int> &p)
{
    if (loaderObject->page.frameAt(QPoint(p.first, p.second)) == nullptr)
        return 0;
    return 1;
}

void ImageConverterPrivate::beginConvert() {
	error = false;
	conversionDone = false;
	errorCode = 0;
	progressString = "0%";
	loaderObject = loader.addResource(settings.in, settings.loadPage, &inputData);
	updateWebSettings(loaderObject->page.settings(), settings.web);
	currentPhase=0;
    emit out.phaseChanged();
	loadProgress(0);
	loader.load();
}


void ImageConverterPrivate::clearResources() {
	loader.clearResources();
}

void ImageConverterPrivate::pagesLoaded(bool ok) {
	if (errorCode == 0) errorCode = loader.httpErrorCode();
	if (!ok) {
		fail();
		return;
	}
	// if fmt is empty try to get it from file extension in out
	if (settings.fmt=="") {
		if (settings.out == "-")
			settings.fmt = "jpg";
		else {
			QFileInfo fi(settings.out);
			settings.fmt = fi.suffix();
		}
	}

	// check whether image format is supported (for writing)
//	QImageWriter test;
//	test.setFormat(settings.fmt);
//	if (!test.canWrite()) {
//		if (!settings.quiet)printf("error: file format not supported\n");
//		httpErrorCode=DEFAULT;
//		return false;
//	}
	// create webkit frame and load website

	currentPhase=1;
	emit out. phaseChanged();
	loadProgress(0);

	QWebFrame * frame = loaderObject->page.mainFrame();
	loaderObject->page.mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOff);

	loadProgress(25);
	// Calculate a good width for the image
	int highWidth=settings.screenWidth;
	loaderObject->page.setViewportSize(QSize(highWidth, 10));
	if (settings.smartWidth && frame->scrollBarMaximum(Qt::Horizontal) > 0) {
		if (highWidth < 10) highWidth=10;
		int lowWidth=highWidth;
		while (frame->scrollBarMaximum(Qt::Horizontal) > 0 && highWidth < 32000) {
			lowWidth = highWidth;
			highWidth *= 2;
			loaderObject->page.setViewportSize(QSize(highWidth, 10));
		}
		while (highWidth - lowWidth > 10) {
			int t = lowWidth + (highWidth - lowWidth)/2;
			loaderObject->page.setViewportSize(QSize(t, 10));
			if (frame->scrollBarMaximum(Qt::Horizontal) > 0)
				lowWidth = t;
			else
				highWidth = t;
		}
		loaderObject->page.setViewportSize(QSize(highWidth, 10));
	}
	loaderObject->page.mainFrame()->setScrollBarPolicy(Qt::Horizontal, Qt::ScrollBarAlwaysOff);
	//Set the right height
	if (settings.screenHeight > 0)
		loaderObject->page.setViewportSize(QSize(highWidth, settings.screenHeight));
	else
		loaderObject->page.setViewportSize(QSize(highWidth, frame->contentsSize().height()));

	QPainter painter;
	QSvgGenerator generator;
	QImage image;
	QFile file;
	QBuffer buffer(&outputData);
    QIODevice * dev = &file;

	bool openOk=true;
	// output image
	if (settings.out.isEmpty())
		dev =  &buffer;
	else if (settings.out != "-" ) {
		file.setFileName(settings.out);
		openOk = file.open(QIODevice::WriteOnly);
	} else {
#ifdef Q_OS_WIN32
		_setmode(_fileno(stdout), _O_BINARY);
#endif
		openOk = file.open(stdout, QIODevice::WriteOnly);
    }

	if (!openOk) {
		emit out.error("Could not write to output file");
		fail();
	}

	if (settings.crop.left < 0) settings.crop.left = 0;
	if (settings.crop.top < 0) settings.crop.top = 0;
	if (settings.crop.width < 0) settings.crop.width = 1000000;
	if (settings.crop.height < 0) settings.crop.height = 1000000;
	QRect rect = QRect(QPoint(0,0), loaderObject->page.viewportSize()).intersected(
		QRect(settings.crop.left,settings.crop.top,settings.crop.width,settings.crop.height));
	if (rect.width() == 0 || rect.height() == 0) {
		emit out.error("Will not output an empty image");
		fail();
	}

	if (settings.fmt != "svg") {
		image = QImage(rect.size(), QImage::Format_ARGB32_Premultiplied);
		painter.begin(&image);
	} else {
		generator.setOutputDevice(dev);
		generator.setSize(rect.size());
		generator.setViewBox(QRect(QPoint(0,0),rect.size()));
#ifdef __EXTENSIVE_WKHTMLTOPDF_QT_HACK__
		generator.setViewBoxClip(true);
#endif
		painter.begin(&generator);
	}

	if (settings.transparent && (settings.fmt == "png" || settings.fmt == "svg")) {
		QWebElement e = frame->findFirstElement("body");
		e.setStyleProperty("background-color", "transparent");
		e.setStyleProperty("background-image", "none");
		QPalette pal = loaderObject->page.palette();
		pal.setBrush(QPalette::Base, Qt::transparent);
		loaderObject->page.setPalette(pal);
	} else {
		painter.fillRect(QRect(QPoint(0,0),loaderObject->page.viewportSize()), Qt::white);
	}
	painter.translate(-rect.left(), -rect.top());
	frame->render(&painter);
	painter.end();
    QPoint point(470,16);
    if (!getFrameAt(std::pair<int,int>(point.x(), point.y())))
        out.warning("Invalid pos");
    else
    {
        QDomDocument doc("mydocument");
        doc.setContent(loaderObject->page.mainFrame()->findFirstElement("div").toOuterXml());
        QDomElement docElem = doc.documentElement();
        QDomNode n = docElem.firstChild();

        while (n.toElement().tagName() != "semantics")
            n = n.firstChild();

//        while(!n.isNull()) {
//            QDomElement e = n.toElement(); // попробуем преобразовать узел в элемент.
//            if(!e.isNull()) {
//                out.warning(e.tagName()); // узел действительно является элементом.
//            }
//            n = n.nextSibling();
//            out.warning(n.toElement().tagName());
//        }

        QWebElement parentElement = loaderObject->page.mainFrame()->findFirstElement("semantics");

//        QWebElement parentElement = loaderObject->page.mainFrame()->documentElement();
        out.warning(QString("Name^: %1").arg(parentElement.toOuterXml()));
        while(1)
        {
            if (!parentElement.nextSibling().isNull() && parentElement.nextSibling().geometry().contains(point))
            {
                parentElement = parentElement.nextSibling();
                n = n.nextSibling();
                out.warning(QString("go to next sibling: %1 -> %2").arg(parentElement.tagName()).arg(parentElement.toInnerXml()));
                continue;
            }
            else
            if (!parentElement.firstChild().isNull())
            {
                parentElement = parentElement.firstChild();
                n = n.firstChild();
                out.warning(QString("go to first child: %1 -> %2").arg(parentElement.tagName()).arg(parentElement.toInnerXml()));
                continue;
            }
            if (parentElement.geometry().contains(point))
            {
//                parentElement.encloseContentsWith();
//                parentElement = parentElement.parent();
//                out.warning(QString("frame at (470,16): %1 -> %2").arg(parentElement.tagName()).arg(parentElement.toInnerXml()));
//                QString str;
//                QTextStream stream(&str);
//                n.save(stream, QDomNode::CDATASectionNode);
//                out.warning("Tag Name: " + str);
                out.warning("Inner value: " + n.toElement().text());
                out.warning(QString("frame at (475,16): %1 -> %2").arg(parentElement.tagName()).arg(n.toCharacterData().data()));
            }
            break;
        }
//        parentElement.setPlainText("Jk");
//        parentElement.setFocus();
//        parentElement.replace("<span>hello</span>");
        out.warning(QString("Name: %1").arg(parentElement.toPlainText()));
    }
//    QWebElement firstElement = parentElement.firstChild();
//    while (parentElement.tagName() != "annotation")
//    {
//        if ((firstElement = firstElement.firstChild()))
//        {
//            if ((firstElement = firstElement.nextSibling()))
//                parentElement = parentElement.nextSibling();

//        }
//    }

//    QWebFrame *frameat = getFrameAt(QPoint(456,16));
//    out.warning(QString("frame at (10,10): %1").arg(frameat->contentsSize().width()));
    out.warning(QString("rect.left: %1; rect.top: %2").arg(-rect.left()).arg(-rect.top()));
    out.warning(QString("mainframe html text: %1").arg(loaderObject->page.mainFrame()->toHtml()));
    out.warning(QString("mainframe contents size(width;height): %1;%2").arg(loaderObject->page.mainFrame()->contentsSize().width()).
                arg(loaderObject->page.mainFrame()->contentsSize().height()));
    out.warning(QString("%1 width size(width;height): %2;%3").arg("mo").arg(loaderObject->page.mainFrame()->findFirstElement("mi").geometry().width())
                .arg(loaderObject->page.mainFrame()->findFirstElement("mi").geometry().height()));
    out.warning(QString("rect.left: %1; rect.top: %2").arg(loaderObject->page.mainFrame()->findFirstElement("mi").geometry().topLeft().x())
                .arg(loaderObject->page.mainFrame()->findFirstElement("mi").geometry().topLeft().y()));

    loadProgress(30);
//     perform filter(s)
//    if (settings.crop.width > 0 && settings.crop.height > 0)
//        image=image.copy(settings.crop.left,settings.crop.top,settings.crop.width,settings.crop.height);
//    loadProgress(50);
//    if (settings.scale.width > 0 && settings.scale.height > 0) {
//         todo: perhaps get more user options to change aspect ration and scaling mode?
//        image=image.scaled(settings.scale.width,settings.scale.height,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);
//    }
//    loadProgress(80);

	if (settings.fmt != "svg") {
		QByteArray fmt=settings.fmt.toLatin1();
		if (!image.save(dev,fmt.data(), settings.quality)) {
			emit out.error("Could not save image");
			fail();
		}
	}
    loadProgress(100);

	currentPhase = 2;
	emit out.phaseChanged();
	conversionDone = true;
    loadProgress(101);
    emit out.finished(true);
    loadProgress(102);

    qApp->exit(0); // quit qt's event handling
}

Converter & ImageConverterPrivate::outer() {
	return out;
}

ImageConverter::~ImageConverter() {
	delete d;
}

ConverterPrivate & ImageConverter::priv() {
	return *d;
}


ImageConverter::ImageConverter(wkhtmltopdf::settings::ImageGlobal & s, const QString * data) {
	d = new ImageConverterPrivate(*this, s, data);
}

const QByteArray & ImageConverter::output() {
	return d->outputData;
}

}

