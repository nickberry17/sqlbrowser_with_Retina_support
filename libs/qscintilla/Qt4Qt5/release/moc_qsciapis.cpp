/****************************************************************************
** Meta object code from reading C++ file 'qsciapis.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qsci/qsciapis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsciapis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QsciAPIs[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,   35,   35,   35, 0x05,
      36,   35,   35,   35, 0x05,
      60,   35,   35,   35, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QsciAPIs[] = {
    "QsciAPIs\0apiPreparationCancelled()\0\0"
    "apiPreparationStarted()\0"
    "apiPreparationFinished()\0"
};

void QsciAPIs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QsciAPIs *_t = static_cast<QsciAPIs *>(_o);
        switch (_id) {
        case 0: _t->apiPreparationCancelled(); break;
        case 1: _t->apiPreparationStarted(); break;
        case 2: _t->apiPreparationFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QsciAPIs::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QsciAPIs::staticMetaObject = {
    { &QsciAbstractAPIs::staticMetaObject, qt_meta_stringdata_QsciAPIs,
      qt_meta_data_QsciAPIs, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QsciAPIs::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QsciAPIs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QsciAPIs::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QsciAPIs))
        return static_cast<void*>(const_cast< QsciAPIs*>(this));
    return QsciAbstractAPIs::qt_metacast(_clname);
}

int QsciAPIs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciAbstractAPIs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QsciAPIs::apiPreparationCancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QsciAPIs::apiPreparationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QsciAPIs::apiPreparationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
