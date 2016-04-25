/****************************************************************************
** Meta object code from reading C++ file 'EditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EditDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   23,   23,   23, 0x05,
      24,   66,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,   23,   23,   23, 0x0a,
      94,  123,   23,   23, 0x0a,
     136,   23,   23,   23, 0x0a,
     147,   23,   23,   23, 0x0a,
     156,  175,   23,   23, 0x0a,
     178,   23,   23,   23, 0x08,
     191,   23,   23,   23, 0x08,
     204,   23,   23,   23, 0x08,
     216,   23,   23,   23, 0x08,
     225,   23,   23,   23, 0x08,
     243,   23,   23,   23, 0x08,
     260,   23,   23,   23, 0x08,
     276,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditDialog[] = {
    "EditDialog\0goingAway()\0\0"
    "updateRecordText(int,int,bool,QByteArray)\0"
    "row,col,isBlob,data\0reset()\0"
    "loadText(QByteArray,int,int)\0data,row,col\0"
    "setFocus()\0reject()\0allowEditing(bool)\0"
    "on\0importData()\0exportData()\0clearData()\0"
    "accept()\0editTextChanged()\0hexDataChanged()\0"
    "checkDataType()\0toggleOverwriteMode()\0"
};

void EditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditDialog *_t = static_cast<EditDialog *>(_o);
        switch (_id) {
        case 0: _t->goingAway(); break;
        case 1: _t->updateRecordText((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4]))); break;
        case 2: _t->reset(); break;
        case 3: _t->loadText((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->setFocus(); break;
        case 5: _t->reject(); break;
        case 6: _t->allowEditing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->importData(); break;
        case 8: _t->exportData(); break;
        case 9: _t->clearData(); break;
        case 10: _t->accept(); break;
        case 11: _t->editTextChanged(); break;
        case 12: _t->hexDataChanged(); break;
        case 13: _t->checkDataType(); break;
        case 14: _t->toggleOverwriteMode(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditDialog,
      qt_meta_data_EditDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditDialog))
        return static_cast<void*>(const_cast< EditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void EditDialog::goingAway()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void EditDialog::updateRecordText(int _t1, int _t2, bool _t3, const QByteArray & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
