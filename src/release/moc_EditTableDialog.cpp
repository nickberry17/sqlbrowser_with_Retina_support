/****************************************************************************
** Meta object code from reading C++ file 'EditTableDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EditTableDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditTableDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditTableDialog[] = {

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
      16,   33,   33,   33, 0x08,
      34,   33,   33,   33, 0x08,
      45,   33,   33,   33, 0x08,
      59,   33,   33,   33, 0x08,
      83,   33,   33,   33, 0x08,
      92,   33,   33,   33, 0x08,
     101,   33,   33,   33, 0x08,
     114,  148,   33,   33, 0x08,
     160,   33,   33,   33, 0x08,
     174,   33,   33,   33, 0x08,
     183,   33,   33,   33, 0x08,
     194,  216,   33,   33, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditTableDialog[] = {
    "EditTableDialog\0populateFields()\0\0"
    "addField()\0removeField()\0"
    "fieldSelectionChanged()\0accept()\0"
    "reject()\0checkInput()\0"
    "itemChanged(QTreeWidgetItem*,int)\0"
    "item,column\0updateTypes()\0moveUp()\0"
    "moveDown()\0setWithoutRowid(bool)\0"
    "without_rowid\0"
};

void EditTableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditTableDialog *_t = static_cast<EditTableDialog *>(_o);
        switch (_id) {
        case 0: _t->populateFields(); break;
        case 1: _t->addField(); break;
        case 2: _t->removeField(); break;
        case 3: _t->fieldSelectionChanged(); break;
        case 4: _t->accept(); break;
        case 5: _t->reject(); break;
        case 6: _t->checkInput(); break;
        case 7: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->updateTypes(); break;
        case 9: _t->moveUp(); break;
        case 10: _t->moveDown(); break;
        case 11: _t->setWithoutRowid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditTableDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditTableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditTableDialog,
      qt_meta_data_EditTableDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditTableDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditTableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditTableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditTableDialog))
        return static_cast<void*>(const_cast< EditTableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditTableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
