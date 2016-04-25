/****************************************************************************
** Meta object code from reading C++ file 'FilterTableHeader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FilterTableHeader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterTableHeader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FilterTableHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   45,   58,   58, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   85,   58,   58, 0x0a,
     102,  123,   58,   58, 0x2a,
     130,   58,   58,   58, 0x0a,
     148,   58,   58,   58, 0x0a,
     163,   45,   58,   58, 0x0a,
     186,  208,   58,   58, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FilterTableHeader[] = {
    "FilterTableHeader\0filterChanged(int,QString)\0"
    "column,value\0\0generateFilters(int,bool)\0"
    "number,showFirst\0generateFilters(int)\0"
    "number\0adjustPositions()\0clearFilters()\0"
    "setFilter(int,QString)\0inputChanged(QString)\0"
    "new_value\0"
};

void FilterTableHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterTableHeader *_t = static_cast<FilterTableHeader *>(_o);
        switch (_id) {
        case 0: _t->filterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->generateFilters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->generateFilters((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->adjustPositions(); break;
        case 4: _t->clearFilters(); break;
        case 5: _t->setFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->inputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FilterTableHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FilterTableHeader::staticMetaObject = {
    { &QHeaderView::staticMetaObject, qt_meta_stringdata_FilterTableHeader,
      qt_meta_data_FilterTableHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FilterTableHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FilterTableHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FilterTableHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FilterTableHeader))
        return static_cast<void*>(const_cast< FilterTableHeader*>(this));
    return QHeaderView::qt_metacast(_clname);
}

int FilterTableHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FilterTableHeader::filterChanged(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
