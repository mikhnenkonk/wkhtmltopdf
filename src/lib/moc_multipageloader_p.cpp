/****************************************************************************
** Meta object code from reading C++ file 'multipageloader_p.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "multipageloader_p.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multipageloader_p.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_wkhtmltopdf__MyNetworkProxyFactory[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__MyNetworkProxyFactory[] = {
    "wkhtmltopdf::MyNetworkProxyFactory\0"
};

void wkhtmltopdf::MyNetworkProxyFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData wkhtmltopdf::MyNetworkProxyFactory::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::MyNetworkProxyFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__MyNetworkProxyFactory,
      qt_meta_data_wkhtmltopdf__MyNetworkProxyFactory, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::MyNetworkProxyFactory::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::MyNetworkProxyFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::MyNetworkProxyFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__MyNetworkProxyFactory))
        return static_cast<void*>(const_cast< MyNetworkProxyFactory*>(this));
    if (!strcmp(_clname, "QNetworkProxyFactory"))
        return static_cast< QNetworkProxyFactory*>(const_cast< MyNetworkProxyFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int wkhtmltopdf::MyNetworkProxyFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_wkhtmltopdf__MyNetworkAccessManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   53,   58,   58, 0x05,
      59,   53,   58,   58, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__MyNetworkAccessManager[] = {
    "wkhtmltopdf::MyNetworkAccessManager\0"
    "warning(QString)\0text\0\0error(QString)\0"
};

void wkhtmltopdf::MyNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyNetworkAccessManager *_t = static_cast<MyNetworkAccessManager *>(_o);
        switch (_id) {
        case 0: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::MyNetworkAccessManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::MyNetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__MyNetworkAccessManager,
      qt_meta_data_wkhtmltopdf__MyNetworkAccessManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::MyNetworkAccessManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::MyNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::MyNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__MyNetworkAccessManager))
        return static_cast<void*>(const_cast< MyNetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int wkhtmltopdf::MyNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void wkhtmltopdf::MyNetworkAccessManager::warning(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void wkhtmltopdf::MyNetworkAccessManager::error(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_wkhtmltopdf__MyQWebPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   52,   53,   52, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__MyQWebPage[] = {
    "wkhtmltopdf::MyQWebPage\0"
    "shouldInterruptJavaScript()\0\0bool\0"
};

void wkhtmltopdf::MyQWebPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MyQWebPage *_t = static_cast<MyQWebPage *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->shouldInterruptJavaScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::MyQWebPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::MyQWebPage::staticMetaObject = {
    { &QWebPage::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__MyQWebPage,
      qt_meta_data_wkhtmltopdf__MyQWebPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::MyQWebPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::MyQWebPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::MyQWebPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__MyQWebPage))
        return static_cast<void*>(const_cast< MyQWebPage*>(this));
    return QWebPage::qt_metacast(_clname);
}

int wkhtmltopdf::MyQWebPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_wkhtmltopdf__ResourceObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   35,   35,   35, 0x0a,
      36,   35,   35,   35, 0x0a,
      50,   68,   35,   35, 0x0a,
      77,   96,   35,   35, 0x0a,
      99,   35,   35,   35, 0x0a,
     118,  145,   35,   35, 0x0a,
     151,   35,   35,   35, 0x0a,
     162,  223,   35,   35, 0x0a,
     243,  260,   35,   35, 0x0a,
     264,  260,   35,   35, 0x0a,
     279,  322,   35,   35, 0x0a,
     329,  356,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__ResourceObject[] = {
    "wkhtmltopdf::ResourceObject\0load()\0\0"
    "loadStarted()\0loadProgress(int)\0"
    "progress\0loadFinished(bool)\0ok\0"
    "waitWindowStatus()\0printRequested(QWebFrame*)\0"
    "frame\0loadDone()\0"
    "handleAuthenticationRequired(QNetworkReply*,QAuthenticator*)\0"
    "reply,authenticator\0warning(QString)\0"
    "str\0error(QString)\0"
    "sslErrors(QNetworkReply*,QList<QSslError>)\0"
    "reply,\0amfinished(QNetworkReply*)\0"
    "reply\0"
};

void wkhtmltopdf::ResourceObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ResourceObject *_t = static_cast<ResourceObject *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->loadStarted(); break;
        case 2: _t->loadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->waitWindowStatus(); break;
        case 5: _t->printRequested((*reinterpret_cast< QWebFrame*(*)>(_a[1]))); break;
        case 6: _t->loadDone(); break;
        case 7: _t->handleAuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->sslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 11: _t->amfinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData wkhtmltopdf::ResourceObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::ResourceObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__ResourceObject,
      qt_meta_data_wkhtmltopdf__ResourceObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::ResourceObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::ResourceObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::ResourceObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__ResourceObject))
        return static_cast<void*>(const_cast< ResourceObject*>(this));
    return QObject::qt_metacast(_clname);
}

int wkhtmltopdf::ResourceObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_wkhtmltopdf__MultiPageLoaderPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   43,   43,   43, 0x0a,
      44,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_wkhtmltopdf__MultiPageLoaderPrivate[] = {
    "wkhtmltopdf::MultiPageLoaderPrivate\0"
    "fail()\0\0loadDone()\0"
};

void wkhtmltopdf::MultiPageLoaderPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MultiPageLoaderPrivate *_t = static_cast<MultiPageLoaderPrivate *>(_o);
        switch (_id) {
        case 0: _t->fail(); break;
        case 1: _t->loadDone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData wkhtmltopdf::MultiPageLoaderPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject wkhtmltopdf::MultiPageLoaderPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_wkhtmltopdf__MultiPageLoaderPrivate,
      qt_meta_data_wkhtmltopdf__MultiPageLoaderPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &wkhtmltopdf::MultiPageLoaderPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *wkhtmltopdf::MultiPageLoaderPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *wkhtmltopdf::MultiPageLoaderPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_wkhtmltopdf__MultiPageLoaderPrivate))
        return static_cast<void*>(const_cast< MultiPageLoaderPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int wkhtmltopdf::MultiPageLoaderPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
