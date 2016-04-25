/****************************************************************************
** Meta object code from reading C++ file 'ImportCsvDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ImportCsvDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImportCsvDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImportCsvDialog[] = {

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
      16,   25,   25,   25, 0x08,
      26,   25,   25,   25, 0x08,
      42,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImportCsvDialog[] = {
    "ImportCsvDialog\0accept()\0\0updatePreview()\0"
    "checkInput()\0"
};

void ImportCsvDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImportCsvDialog *_t = static_cast<ImportCsvDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->updatePreview(); break;
        case 2: _t->checkInput(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ImportCsvDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImportCsvDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ImportCsvDialog,
      qt_meta_data_ImportCsvDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImportCsvDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImportCsvDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImportCsvDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImportCsvDialog))
        return static_cast<void*>(const_cast< ImportCsvDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ImportCsvDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
