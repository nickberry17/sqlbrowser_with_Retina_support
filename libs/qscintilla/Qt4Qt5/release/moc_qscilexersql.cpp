/****************************************************************************
** Meta object code from reading C++ file 'qscilexersql.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qsci/qscilexersql.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscilexersql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QsciLexerSQL[] = {

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
      13,   39,   46,   46, 0x0a,
      47,   69,   46,   46, 0x0a,
      74,   69,   46,   46, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QsciLexerSQL[] = {
    "QsciLexerSQL\0setBackslashEscapes(bool)\0"
    "enable\0\0setFoldComments(bool)\0fold\0"
    "setFoldCompact(bool)\0"
};

void QsciLexerSQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QsciLexerSQL *_t = static_cast<QsciLexerSQL *>(_o);
        switch (_id) {
        case 0: _t->setBackslashEscapes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setFoldComments((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setFoldCompact((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QsciLexerSQL::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QsciLexerSQL::staticMetaObject = {
    { &QsciLexer::staticMetaObject, qt_meta_stringdata_QsciLexerSQL,
      qt_meta_data_QsciLexerSQL, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QsciLexerSQL::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QsciLexerSQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QsciLexerSQL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QsciLexerSQL))
        return static_cast<void*>(const_cast< QsciLexerSQL*>(this));
    return QsciLexer::qt_metacast(_clname);
}

int QsciLexerSQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciLexer::qt_metacall(_c, _id, _a);
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
