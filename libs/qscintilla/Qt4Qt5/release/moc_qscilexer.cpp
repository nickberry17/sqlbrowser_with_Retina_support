/****************************************************************************
** Meta object code from reading C++ file 'qscilexer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qsci/qscilexer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscilexer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QsciLexer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,   35,   43,   43, 0x05,
      44,   69,   43,   43, 0x05,
      85,  108,   43,   43, 0x05,
     116,   35,   43,   43, 0x05,
     141,  182,   43,   43, 0x05,

 // slots: signature, parameters, type, tag, flags
     191,  215,   43,   43, 0x0a,
     231,   35,   43,   43, 0x0a,
     252,  269,   43,   43, 0x2a,
     271,  292,   43,   43, 0x0a,
     306,  323,   43,   43, 0x2a,
     331,  108,   43,   43, 0x0a,
     350,  365,   43,   43, 0x2a,
     367,   35,   43,   43, 0x0a,
     388,  269,   43,   43, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_QsciLexer[] = {
    "QsciLexer\0colorChanged(QColor,int)\0"
    "c,style\0\0eolFillChanged(bool,int)\0"
    "eolfilled,style\0fontChanged(QFont,int)\0"
    "f,style\0paperChanged(QColor,int)\0"
    "propertyChanged(const char*,const char*)\0"
    "prop,val\0setAutoIndentStyle(int)\0"
    "autoindentstyle\0setColor(QColor,int)\0"
    "setColor(QColor)\0c\0setEolFill(bool,int)\0"
    "eoffill,style\0setEolFill(bool)\0eoffill\0"
    "setFont(QFont,int)\0setFont(QFont)\0f\0"
    "setPaper(QColor,int)\0setPaper(QColor)\0"
};

void QsciLexer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QsciLexer *_t = static_cast<QsciLexer *>(_o);
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->eolFillChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->paperChanged((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->propertyChanged((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 5: _t->setAutoIndentStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->setEolFill((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setEolFill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 12: _t->setPaper((*reinterpret_cast< const QColor(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setPaper((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QsciLexer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QsciLexer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QsciLexer,
      qt_meta_data_QsciLexer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QsciLexer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QsciLexer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QsciLexer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QsciLexer))
        return static_cast<void*>(const_cast< QsciLexer*>(this));
    return QObject::qt_metacast(_clname);
}

int QsciLexer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QsciLexer::colorChanged(const QColor & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QsciLexer::eolFillChanged(bool _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QsciLexer::fontChanged(const QFont & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QsciLexer::paperChanged(const QColor & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QsciLexer::propertyChanged(const char * _t1, const char * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
