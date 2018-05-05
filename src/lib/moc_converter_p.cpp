/****************************************************************************
** Meta object code from reading C++ file 'converter_p.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "converter_p.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'converter_p.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wkhtmltopdf__ConverterPrivate[] = {

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
      30,   37,   37,   37, 0x0a,
      38,   56,   37,   37, 0x0a,
      65,   37,   37,   37, 0x0a,
      80,   37,   37,   37, 0x0a,
      89,   37,  107,   37, 0x0a,
     120,  143,  107,   37, 0x0a,
     147,  183,  197,   37, 0x0a,
     201,  238,  197,   37, 0x0a,
     253,  285,  197,   37, 0x0a,
     295,  327,  197,   37, 0x0a,
     337,  374,  107,   37, 0x0a,
     382,  374,  107,   37, 0x0a,
     418,   37,  428,   37, 0x0a,
     433,  455,   37,   37, 0x0a,
     461,  485,   37,   37, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__ConverterPrivate[] = {
    "wkhtmltopdf::ConverterPrivate\0fail()\0"
    "\0loadProgress(int)\0progress\0beginConvert()\0"
    "cancel()\0_getRootElement()\0QWebElement*\0"
    "_getElementAt(int,int)\0x,y\0"
    "_getElementWidth(QWebElement*,int*)\0"
    "element,width\0int\0"
    "_getElementHeight(QWebElement*,int*)\0"
    "element,height\0_getElementX(QWebElement*,int*)\0"
    "element,X\0_getElementY(QWebElement*,int*)\0"
    "element,Y\0_getElementNextSibling(QWebElement*)\0"
    "element\0_getElementFirstChild(QWebElement*)\0"
    "convert()\0bool\0forwardError(QString)\0"
    "error\0forwardWarning(QString)\0warning\0"
};

void wkhtmltopdf::ConverterPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ConverterPrivate *_t = static_cast<ConverterPrivate *>(_o);
        switch (_id) {
        case 0: _t->fail(); break;
        case 1: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->beginConvert(); break;
        case 3: _t->cancel(); break;
        case 4: { QWebElement* _r = _t->_getRootElement();
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 5: { QWebElement* _r = _t->_getElementAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->_getElementWidth((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->_getElementHeight((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->_getElementX((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->_getElementY((*reinterpret_cast< QWebElement*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QWebElement* _r = _t->_getElementNextSibling((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 11: { QWebElement* _r = _t->_getElementFirstChild((*reinterpret_cast< QWebElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWebElement**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->convert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->forwardError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->forwardWarning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::ConverterPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::ConverterPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__ConverterPrivate,
      qt_meta_data_wkhtmltopdf__ConverterPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::ConverterPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::ConverterPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::ConverterPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__ConverterPrivate))
        return static_cast<void*>(const_cast< ConverterPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int wkhtmltopdf::ConverterPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
