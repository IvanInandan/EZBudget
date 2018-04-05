/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../account.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Account_t {
    QByteArrayData data[18];
    char stringdata0[179];
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
QT_MOC_LITERAL(3, 25, 21), // "spendingsTableChanged"
QT_MOC_LITERAL(4, 47, 15), // "transacCategory"
QT_MOC_LITERAL(5, 63, 11), // "transacName"
QT_MOC_LITERAL(6, 75, 11), // "transacDate"
QT_MOC_LITERAL(7, 87, 6), // "amount"
QT_MOC_LITERAL(8, 94, 9), // "setBudget"
QT_MOC_LITERAL(9, 104, 1), // "b"
QT_MOC_LITERAL(10, 106, 10), // "setSavings"
QT_MOC_LITERAL(11, 117, 13), // "savingPercent"
QT_MOC_LITERAL(12, 131, 9), // "setIncome"
QT_MOC_LITERAL(13, 141, 1), // "i"
QT_MOC_LITERAL(14, 143, 11), // "setCategory"
QT_MOC_LITERAL(15, 155, 5), // "index"
QT_MOC_LITERAL(16, 161, 9), // "Category&"
QT_MOC_LITERAL(17, 171, 7) // "section"

    },
    "Account\0accountModified\0\0spendingsTableChanged\0"
    "transacCategory\0transacName\0transacDate\0"
    "amount\0setBudget\0b\0setSavings\0"
    "savingPercent\0setIncome\0i\0setCategory\0"
    "index\0Category&\0section"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Account[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    4,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,
      12,    1,   60,    2, 0x0a /* Public */,
      14,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Float,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    9,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Bool, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 16,   15,   17,

       0        // eod
};

void Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Account *_t = static_cast<Account *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accountModified(); break;
        case 1: _t->spendingsTableChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 2: { bool _r = _t->setBudget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->setSavings((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->setIncome((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setCategory((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Category(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Account::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::accountModified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Account::*)(QString , QString , QString , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Account::spendingsTableChanged)) {
                *result = 1;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Account::accountModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Account::spendingsTableChanged(QString _t1, QString _t2, QString _t3, float _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
