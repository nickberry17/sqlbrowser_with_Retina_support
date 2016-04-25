/****************************************************************************
** Meta object code from reading C++ file 'sqltextedit.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sqltextedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqltextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlTextEdit[] = {

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
      12,   29,   29,   29, 0x0a,
      30,   29,   29,   29, 0x0a,
      47,   29,   29,   29, 0x0a,
      70,  105,   29,   29, 0x0a,
     137,   29,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SqlTextEdit[] = {
    "SqlTextEdit\0reloadKeywords()\0\0"
    "reloadSettings()\0clearErrorIndicators()\0"
    "setErrorIndicator(int,int,int,int)\0"
    "fromRow,fromIndex,toRow,toIndex\0"
    "updateLineNumberAreaWidth()\0"
};

void SqlTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlTextEdit *_t = static_cast<SqlTextEdit *>(_o);
        switch (_id) {
        case 0: _t->reloadKeywords(); break;
        case 1: _t->reloadSettings(); break;
        case 2: _t->clearErrorIndicators(); break;
        case 3: _t->setErrorIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->updateLineNumberAreaWidth(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SqlTextEdit::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlTextEdit::staticMetaObject = {
    { &QsciScintilla::staticMetaObject, qt_meta_stringdata_SqlTextEdit,
      qt_meta_data_SqlTextEdit, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlTextEdit))
        return static_cast<void*>(const_cast< SqlTextEdit*>(this));
    return QsciScintilla::qt_metacast(_clname);
}

int SqlTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
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
