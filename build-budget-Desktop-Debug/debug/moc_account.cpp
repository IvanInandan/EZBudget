/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EZbudget/account.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Account_t {
    QByteArrayData data[19];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Account_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Account_t qt_meta_stringdata_Account = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Account"
QT_MOC_LITERAL(1, 8, 15), // "accountModified"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "setBudget"
QT_MOC_LITERAL(4, 35, 1), // "b"
QT_MOC_LITERAL(5, 37, 10), // "setSavings"
QT_MOC_LITERAL(6, 48, 13), // "savingPercent"
QT_MOC_LITERAL(7, 62, 9), // "setIncome"
QT_MOC_LITERAL(8, 72, 1), // "i"
QT_MOC_LITERAL(9, 74, 16), // "editTransactions"
QT_MOC_LITERAL(10, 91, 8), // "category"
QT_MOC_LITERAL(11, 100, 5), // "tName"
QT_MOC_LITERAL(12, 106, 5), // "tDate"
QT_MOC_LITERAL(13, 112, 8), // "QString&"
QT_MOC_LITERAL(14, 121, 4), // "type"
QT_MOC_LITERAL(15, 126, 6), // "amount"
QT_MOC_LITERAL(16, 133, 5), // "index"
QT_MOC_LITERAL(17, 139, 15), // "addTransactions"
QT_MOC_LITERAL(18, 155, 18) // "removeTransactions"

    },
    "Account\0accountModified\0\0setBudget\0b\0"
    "setSavings\0savingPercent\0setIncome\0i\0"
    "editTransactions\0category\0tName\0tDate\0"
    "QString&\0type\0amount\0index\0addTransactions\0"
    "removeTransactions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Account[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       9,    6,   59,    2, 0x0a /* Public */,
      17,    5,   72,    2, 0x0a /* Public */,
      18,    2,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Bool, QMetaType::Int,    6,
    QMetaType::Bool, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   10,   11,   12,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 13, QMetaType::Int,   10,   11,   12,   14,   15,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13,   16,   14,

       0        // eod
};

void Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Account *_t = static_cast<Account *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountModified(); break;
        case 1: { bool _r = _t->setBudget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->setSavings((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setIncome((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->editTransactions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 5: _t->addTransactions((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->removeTransactions((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Account::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::accountModified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Account::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Account.data,
      qt_meta_data_Account,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Account::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Account.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Account::accountModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
