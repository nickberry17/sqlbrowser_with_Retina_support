/****************************************************************************
** Meta object code from reading C++ file 'CreateIndexDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CreateIndexDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CreateIndexDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CreateIndexDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   27,   27,   27, 0x08,
      28,   50,   27,   27, 0x08,
      60,   27,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CreateIndexDialog[] = {
    "CreateIndexDialog\0accept()\0\0"
    "tableChanged(QString)\0new_table\0"
    "checkInput()\0"
};

void CreateIndexDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CreateIndexDialog *_t = static_cast<CreateIndexDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->tableChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->checkInput(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CreateIndexDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CreateIndexDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CreateIndexDialog,
      qt_meta_data_CreateIndexDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CreateIndexDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CreateIndexDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CreateIndexDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CreateIndexDialog))
        return static_cast<void*>(const_cast< CreateIndexDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CreateIndexDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
