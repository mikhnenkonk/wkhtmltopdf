/****************************************************************************
** Meta object code from reading C++ file 'converter.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "converter.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'converter.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wkhtmltopdf__Converter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   40,   48,   48, 0x05,
      49,   40,   48,   48, 0x05,
      64,   48,   48,   48, 0x05,
      79,  100,   48,   48, 0x05,
     109,  124,   48,   48, 0x05,
     127,  155,   48,   48, 0x05,
     160,  155,   48,   48, 0x05,
     195,  155,   48,   48, 0x05,
     226,  155,   48,   48, 0x05,

 // slots: signature, parameters, type, tag, flags
     264,   48,   48,   48, 0x0a,
     282,   48,  292,   48, 0x0a,
     297,   48,   48,   48, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__Converter[] = {
    "wkhtmltopdf::Converter\0warning(QString)\0"
    "message\0\0error(QString)\0phaseChanged()\0"
    "progressChanged(int)\0progress\0"
    "finished(bool)\0ok\0checkboxSvgChanged(QString)\0"
    "path\0checkboxCheckedSvgChanged(QString)\0"
    "radiobuttonSvgChanged(QString)\0"
    "radiobuttonCheckedSvgChanged(QString)\0"
    "beginConversion()\0convert()\0bool\0"
    "cancel()\0"
};

void wkhtmltopdf::Converter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Converter *_t = static_cast<Converter *>(_o);
        switch (_id) {
        case 0: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->phaseChanged(); break;
        case 3: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->checkboxSvgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->checkboxCheckedSvgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->radiobuttonSvgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->radiobuttonCheckedSvgChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->beginConversion(); break;
        case 10: { bool _r = _t->convert();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::Converter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::Converter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__Converter,
      qt_meta_data_wkhtmltopdf__Converter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::Converter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::Converter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::Converter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__Converter))
        return static_cast<void*>(const_cast< Converter*>(this));
    return QObject::qt_metacast(_clname);
}

int wkhtmltopdf::Converter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void wkhtmltopdf::Converter::warning(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void wkhtmltopdf::Converter::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void wkhtmltopdf::Converter::phaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void wkhtmltopdf::Converter::progressChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void wkhtmltopdf::Converter::finished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void wkhtmltopdf::Converter::checkboxSvgChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void wkhtmltopdf::Converter::checkboxCheckedSvgChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void wkhtmltopdf::Converter::radiobuttonSvgChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void wkhtmltopdf::Converter::radiobuttonCheckedSvgChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
