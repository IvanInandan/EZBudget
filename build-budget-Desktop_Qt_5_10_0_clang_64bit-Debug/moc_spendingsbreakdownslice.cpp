/****************************************************************************
** Meta object code from reading C++ file 'spendingsbreakdownslice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../EZbudget/spendingsbreakdownslice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spendingsbreakdownslice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_spendingsBreakdownSlice_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_spendingsBreakdownSlice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_spendingsBreakdownSlice_t qt_meta_stringdata_spendingsBreakdownSlice = {
    {
QT_MOC_LITERAL(0, 0, 23), // "spendingsBreakdownSlice"
QT_MOC_LITERAL(1, 24, 11), // "updateLabel"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "showHighlight"
QT_MOC_LITERAL(4, 51, 4) // "show"

    },
    "spendingsBreakdownSlice\0updateLabel\0"
    "\0showHighlight\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_spendingsBreakdownSlice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void spendingsBreakdownSlice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        spendingsBreakdownSlice *_t = static_cast<spendingsBreakdownSlice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLabel(); break;
        case 1: _t->showHighlight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject spendingsBreakdownSlice::staticMetaObject = {
    { &QPieSlice::staticMetaObject, qt_meta_stringdata_spendingsBreakdownSlice.data,
      qt_meta_data_spendingsBreakdownSlice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *spendingsBreakdownSlice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *spendingsBreakdownSlice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_spendingsBreakdownSlice.stringdata0))
        return static_cast<void*>(this);
    return QPieSlice::qt_metacast(_clname);
}

int spendingsBreakdownSlice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPieSlice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
