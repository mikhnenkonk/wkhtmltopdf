/****************************************************************************
** Meta object code from reading C++ file 'pdfconverter_p.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pdfconverter_p.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdfconverter_p.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wkhtmltopdf__PdfConverterPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   62,   65,   65, 0x0a,
      66,   62,   65,   65, 0x0a,
      84,   62,   65,   65, 0x0a,
     100,   62,   65,   65, 0x0a,
     120,   65,   65,   65, 0x0a,
     136,  159,  163,   65, 0x0a,
     176,   65,  163,   65, 0x0a,
     194,  230,  244,   65, 0x0a,
     248,  285,  244,   65, 0x0a,
     300,  332,  244,   65, 0x0a,
     342,  374,  244,   65, 0x0a,
     384,  421,  163,   65, 0x0a,
     429,  421,  163,   65, 0x0a,
     465,   65,   65,   65, 0x0a,
     480,   65,   65,   65, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__PdfConverterPrivate[] = {
    "wkhtmltopdf::PdfConverterPrivate\0"
    "measuringHeadersLoaded(bool)\0ok\0\0"
    "pagesLoaded(bool)\0tocLoaded(bool)\0"
    "headersLoaded(bool)\0printDocument()\0"
    "_getElementAt(int,int)\0x,y\0QWebElement*\0"
    "_getRootElement()\0_getElementWidth(QWebElement*,int*)\0"
    "element,width\0int\0"
    "_getElementHeight(QWebElement*,int*)\0"
    "element,height\0_getElementX(QWebElement*,int*)\0"
    "element,X\0_getElementY(QWebElement*,int*)\0"
    "element,Y\0_getElementNextSibling(QWebElement*)\0"
    "element\0_getElementFirstChild(QWebElement*)\0"
    "beginConvert()\0outer()\0"
};

void wkhtmltopdf::PdfConverterPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PdfConverterPrivate *_t = static_cast<PdfConverterPrivate *>(_o);
        switch (_id) {
        case 0: _t->measuringHeadersLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->pagesLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->tocLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->headersLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->printDocument(); break;
        case 5: { QWebElement* _r = _t->_getElementAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 6: { QWebElement* _r = _t->_getRootElement();
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->_getElementWidth((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->_getElementHeight((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->_getElementX((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->_getElementY((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QWebElement* _r = _t->_getElementNextSibling((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 12: { QWebElement* _r = _t->_getElementFirstChild((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 13: _t->beginConvert(); break;
        case 14: _t->outer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::PdfConverterPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::PdfConverterPrivate::staticMetaObject = {
    { &ConverterPrivate::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__PdfConverterPrivate,
      qt_meta_data_wkhtmltopdf__PdfConverterPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::PdfConverterPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::PdfConverterPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::PdfConverterPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__PdfConverterPrivate))
        return static_cast<void*>(const_cast< PdfConverterPrivate*>(this));
    return ConverterPrivate::qt_metacast(_clname);
}

int wkhtmltopdf::PdfConverterPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConverterPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
