/****************************************************************************
** Meta object code from reading C++ file 'image_c_bindings_p.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "image_c_bindings_p.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image_c_bindings_p.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyImageConverter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   34,   42,   42, 0x0a,
      43,   34,   42,   42, 0x0a,
      58,   42,   42,   42, 0x0a,
      73,   94,   42,   42, 0x0a,
     103,  118,   42,   42, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MyImageConverter[] = {
    "MyImageConverter\0warning(QString)\0"
    "message\0\0error(QString)\0phaseChanged()\0"
    "progressChanged(int)\0progress\0"
    "finished(bool)\0ok\0"
};

void MyImageConverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyImageConverter *_t = static_cast<MyImageConverter *>(_o);
        switch (_id) {
        case 0: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->phaseChanged(); break;
        case 3: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MyImageConverter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyImageConverter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyImageConverter,
      qt_meta_data_MyImageConverter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyImageConverter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyImageConverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyImageConverter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyImageConverter))
        return static_cast<void*>(const_cast< MyImageConverter*>(this));
    return QObject::qt_metacast(_clname);
}

int MyImageConverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
