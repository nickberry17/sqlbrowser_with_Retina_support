/****************************************************************************
** Meta object code from reading C++ file 'qsciscintillabase.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Qsci/qsciscintillabase.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsciscintillabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QsciScintillaBase[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      29,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   40,   44,   44, 0x05,
      45,   44,   44,   44, 0x05,
      66,   44,   44,   44, 0x05,
      89,  125,   44,   44, 0x05,
     144,   44,   44,   44, 0x05,
     158,  180,   44,   44, 0x05,
     190,  209,   44,   44, 0x05,
     219,  248,   44,   44, 0x05,
     272,  298,   44,   44, 0x05,
     301,  298,   44,   44, 0x05,
     329,   44,   44,   44, 0x05,
     343,   44,   44,   44, 0x05,
     358,  384,   44,   44, 0x05,
     403,  384,   44,   44, 0x05,
     435,  384,   44,   44, 0x05,
     468,  384,   44,   44, 0x05,
     496,  384,   44,   44, 0x05,
     526,  298,   44,   44, 0x05,
     560,  589,   44,   44, 0x05,
     615,  677,   44,   44, 0x05,
     687,   44,   44,   44, 0x05,
     709,  732,   44,   44, 0x05,
     734,   44,   44,   44, 0x05,
     748,   44,   44,   44, 0x05,
     768,   44,   44,   44, 0x05,
     791,  812,   44,   44, 0x05,
     821,  839,   44,   44, 0x05,
     847,  732,   44,   44, 0x05,
     886,   44,   44,   44, 0x05,

 // slots: signature, parameters, type, tag, flags
     897,  912,   44,   44, 0x08,
     918,  912,   44,   44, 0x08,
     933,   44,   44,   44, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QsciScintillaBase[] = {
    "QsciScintillaBase\0QSCN_SELCHANGED(bool)\0"
    "yes\0\0SCN_AUTOCCANCELLED()\0"
    "SCN_AUTOCCHARDELETED()\0"
    "SCN_AUTOCSELECTION(const char*,int)\0"
    "selection,position\0SCEN_CHANGE()\0"
    "SCN_CALLTIPCLICK(int)\0direction\0"
    "SCN_CHARADDED(int)\0charadded\0"
    "SCN_DOUBLECLICK(int,int,int)\0"
    "position,line,modifiers\0"
    "SCN_DWELLEND(int,int,int)\0,,\0"
    "SCN_DWELLSTART(int,int,int)\0SCN_FOCUSIN()\0"
    "SCN_FOCUSOUT()\0SCN_HOTSPOTCLICK(int,int)\0"
    "position,modifiers\0SCN_HOTSPOTDOUBLECLICK(int,int)\0"
    "SCN_HOTSPOTRELEASECLICK(int,int)\0"
    "SCN_INDICATORCLICK(int,int)\0"
    "SCN_INDICATORRELEASE(int,int)\0"
    "SCN_MACRORECORD(uint,ulong,void*)\0"
    "SCN_MARGINCLICK(int,int,int)\0"
    "position,modifiers,margin\0"
    "SCN_MODIFIED(int,int,const char*,int,int,int,int,int,int,int)\0"
    ",,,,,,,,,\0SCN_MODIFYATTEMPTRO()\0"
    "SCN_NEEDSHOWN(int,int)\0,\0SCN_PAINTED()\0"
    "SCN_SAVEPOINTLEFT()\0SCN_SAVEPOINTREACHED()\0"
    "SCN_STYLENEEDED(int)\0position\0"
    "SCN_UPDATEUI(int)\0updated\0"
    "SCN_USERLISTSELECTION(const char*,int)\0"
    "SCN_ZOOM()\0handleVSb(int)\0value\0"
    "handleHSb(int)\0handleSelection()\0"
};

void QsciScintillaBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QsciScintillaBase *_t = static_cast<QsciScintillaBase *>(_o);
        switch (_id) {
        case 0: _t->QSCN_SELCHANGED((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SCN_AUTOCCANCELLED(); break;
        case 2: _t->SCN_AUTOCCHARDELETED(); break;
        case 3: _t->SCN_AUTOCSELECTION((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->SCEN_CHANGE(); break;
        case 5: _t->SCN_CALLTIPCLICK((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SCN_CHARADDED((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->SCN_DOUBLECLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->SCN_DWELLEND((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->SCN_DWELLSTART((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->SCN_FOCUSIN(); break;
        case 11: _t->SCN_FOCUSOUT(); break;
        case 12: _t->SCN_HOTSPOTCLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->SCN_HOTSPOTDOUBLECLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->SCN_HOTSPOTRELEASECLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->SCN_INDICATORCLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->SCN_INDICATORRELEASE((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->SCN_MACRORECORD((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 18: _t->SCN_MARGINCLICK((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->SCN_MODIFIED((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10]))); break;
        case 20: _t->SCN_MODIFYATTEMPTRO(); break;
        case 21: _t->SCN_NEEDSHOWN((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->SCN_PAINTED(); break;
        case 23: _t->SCN_SAVEPOINTLEFT(); break;
        case 24: _t->SCN_SAVEPOINTREACHED(); break;
        case 25: _t->SCN_STYLENEEDED((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->SCN_UPDATEUI((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->SCN_USERLISTSELECTION((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->SCN_ZOOM(); break;
        case 29: _t->handleVSb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->handleHSb((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->handleSelection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QsciScintillaBase::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QsciScintillaBase::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QsciScintillaBase,
      qt_meta_data_QsciScintillaBase, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QsciScintillaBase::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QsciScintillaBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QsciScintillaBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QsciScintillaBase))
        return static_cast<void*>(const_cast< QsciScintillaBase*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QsciScintillaBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void QsciScintillaBase::QSCN_SELCHANGED(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QsciScintillaBase::SCN_AUTOCCANCELLED()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QsciScintillaBase::SCN_AUTOCCHARDELETED()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QsciScintillaBase::SCN_AUTOCSELECTION(const char * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QsciScintillaBase::SCEN_CHANGE()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QsciScintillaBase::SCN_CALLTIPCLICK(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QsciScintillaBase::SCN_CHARADDED(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QsciScintillaBase::SCN_DOUBLECLICK(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QsciScintillaBase::SCN_DWELLEND(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QsciScintillaBase::SCN_DWELLSTART(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QsciScintillaBase::SCN_FOCUSIN()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void QsciScintillaBase::SCN_FOCUSOUT()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void QsciScintillaBase::SCN_HOTSPOTCLICK(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QsciScintillaBase::SCN_HOTSPOTDOUBLECLICK(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QsciScintillaBase::SCN_HOTSPOTRELEASECLICK(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QsciScintillaBase::SCN_INDICATORCLICK(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QsciScintillaBase::SCN_INDICATORRELEASE(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QsciScintillaBase::SCN_MACRORECORD(unsigned int _t1, unsigned long _t2, void * _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QsciScintillaBase::SCN_MARGINCLICK(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QsciScintillaBase::SCN_MODIFIED(int _t1, int _t2, const char * _t3, int _t4, int _t5, int _t6, int _t7, int _t8, int _t9, int _t10)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QsciScintillaBase::SCN_MODIFYATTEMPTRO()
{
    QMetaObject::activate(this, &staticMetaObject, 20, 0);
}

// SIGNAL 21
void QsciScintillaBase::SCN_NEEDSHOWN(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QsciScintillaBase::SCN_PAINTED()
{
    QMetaObject::activate(this, &staticMetaObject, 22, 0);
}

// SIGNAL 23
void QsciScintillaBase::SCN_SAVEPOINTLEFT()
{
    QMetaObject::activate(this, &staticMetaObject, 23, 0);
}

// SIGNAL 24
void QsciScintillaBase::SCN_SAVEPOINTREACHED()
{
    QMetaObject::activate(this, &staticMetaObject, 24, 0);
}

// SIGNAL 25
void QsciScintillaBase::SCN_STYLENEEDED(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void QsciScintillaBase::SCN_UPDATEUI(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void QsciScintillaBase::SCN_USERLISTSELECTION(const char * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QsciScintillaBase::SCN_ZOOM()
{
    QMetaObject::activate(this, &staticMetaObject, 28, 0);
}
QT_END_MOC_NAMESPACE
