/****************************************************************************
** Meta object code from reading C++ file 'SqlExecutionArea.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SqlExecutionArea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SqlExecutionArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlExecutionArea[] = {

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
      17,   42,   49,   49, 0x0a,
      50,   73,   49,   49, 0x0a,
      80,   49,   49,   49, 0x0a,
      92,   49,   49,   49, 0x0a,
     105,   49,   49,   49, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SqlExecutionArea[] = {
    "SqlExecutionArea\0finishExecution(QString)\0"
    "result\0\0enableSaveButton(bool)\0enable\0"
    "saveAsCsv()\0saveAsView()\0reloadSettings()\0"
};

void SqlExecutionArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlExecutionArea *_t = static_cast<SqlExecutionArea *>(_o);
        switch (_id) {
        case 0: _t->finishExecution((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->enableSaveButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveAsCsv(); break;
        case 3: _t->saveAsView(); break;
        case 4: _t->reloadSettings(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SqlExecutionArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlExecutionArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SqlExecutionArea,
      qt_meta_data_SqlExecutionArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlExecutionArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlExecutionArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlExecutionArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlExecutionArea))
        return static_cast<void*>(const_cast< SqlExecutionArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int SqlExecutionArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
