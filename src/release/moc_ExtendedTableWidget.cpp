/****************************************************************************
** Meta object code from reading C++ file 'ExtendedTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExtendedTableWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtendedTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExtendedTableWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   66,   85,   85, 0x05,

 // slots: signature, parameters, type, tag, flags
      86,  109,   85,   85, 0x08,
     115,  140,   85,   85, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ExtendedTableWidget[] = {
    "ExtendedTableWidget\0"
    "foreignKeyClicked(QString,QString,QByteArray)\0"
    "table,column,value\0\0vscrollbarChanged(int)\0"
    "value\0cellClicked(QModelIndex)\0index\0"
};

void ExtendedTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtendedTableWidget *_t = static_cast<ExtendedTableWidget *>(_o);
        switch (_id) {
        case 0: _t->foreignKeyClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->vscrollbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cellClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExtendedTableWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExtendedTableWidget::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_ExtendedTableWidget,
      qt_meta_data_ExtendedTableWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExtendedTableWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExtendedTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExtendedTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedTableWidget))
        return static_cast<void*>(const_cast< ExtendedTableWidget*>(this));
    return QTableView::qt_metacast(_clname);
}

int ExtendedTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
void ExtendedTableWidget::foreignKeyClicked(const QString & _t1, const QString & _t2, const QByteArray & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
