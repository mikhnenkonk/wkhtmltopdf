/****************************************************************************
** Meta object code from reading C++ file 'imageconverter_p.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imageconverter_p.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageconverter_p.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wkhtmltopdf__ImageConverterPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   58,   62,   75, 0x0a,
      76,   75,   62,   75, 0x0a,
      94,  130,  144,   75, 0x0a,
     148,  185,  144,   75, 0x0a,
     200,  232,  144,   75, 0x0a,
     242,  274,  144,   75, 0x0a,
     284,  321,   62,   75, 0x0a,
     329,  321,   62,   75, 0x0a,
     365,  383,   75,   75, 0x0a,
     386,   75,   75,   75, 0x0a,
     401,   75,   75,   75, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__ImageConverterPrivate[] = {
    "wkhtmltopdf::ImageConverterPrivate\0"
    "_getElementAt(int,int)\0x,y\0QWebElement*\0"
    "\0_getRootElement()\0"
    "_getElementWidth(QWebElement*,int*)\0"
    "element,width\0int\0"
    "_getElementHeight(QWebElement*,int*)\0"
    "element,height\0_getElementX(QWebElement*,int*)\0"
    "element,X\0_getElementY(QWebElement*,int*)\0"
    "element,Y\0_getElementNextSibling(QWebElement*)\0"
    "element\0_getElementFirstChild(QWebElement*)\0"
    "pagesLoaded(bool)\0ok\0beginConvert()\0"
    "outer()\0"
};

void wkhtmltopdf::ImageConverterPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageConverterPrivate *_t = static_cast<ImageConverterPrivate *>(_o);
        switch (_id) {
        case 0: { QWebElement* _r = _t->_getElementAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 1: { QWebElement* _r = _t->_getRootElement();
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->_getElementWidth((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->_getElementHeight((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->_getElementX((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->_getElementY((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QWebElement* _r = _t->_getElementNextSibling((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 7: { QWebElement* _r = _t->_getElementFirstChild((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 8: _t->pagesLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->beginConvert(); break;
        case 10: _t->outer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::ImageConverterPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::ImageConverterPrivate::staticMetaObject = {
    { &ConverterPrivate::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__ImageConverterPrivate,
      qt_meta_data_wkhtmltopdf__ImageConverterPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::ImageConverterPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::ImageConverterPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::ImageConverterPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__ImageConverterPrivate))
        return static_cast<void*>(const_cast< ImageConverterPrivate*>(this));
    return ConverterPrivate::qt_metacast(_clname);
}

int wkhtmltopdf::ImageConverterPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConverterPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
