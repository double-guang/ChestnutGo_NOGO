/****************************************************************************
** Meta object code from reading C++ file 'settingdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../settingdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingDialog_t {
    uint offsetsAndSizes[28];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SettingDialog_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_SettingDialog_t qt_meta_stringdata_SettingDialog = {
    {
        QT_MOC_LITERAL(0, 13),  // "SettingDialog"
        QT_MOC_LITERAL(14, 15),  // "startGameSignal"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 20),  // "gameModeSelectSignal"
        QT_MOC_LITERAL(52, 5),  // "index"
        QT_MOC_LITERAL(58, 23),  // "firstPlayerSelectSignal"
        QT_MOC_LITERAL(82, 19),  // "humanTimeEditSignal"
        QT_MOC_LITERAL(102, 4),  // "arg1"
        QT_MOC_LITERAL(107, 17),  // "botTimeEditSignal"
        QT_MOC_LITERAL(125, 23),  // "on_OKPushButton_clicked"
        QT_MOC_LITERAL(149, 37),  // "on_GameModeSelect_currentInde..."
        QT_MOC_LITERAL(187, 40),  // "on_FirstPlayerSelect_currentI..."
        QT_MOC_LITERAL(228, 28),  // "on_HumanTimeEdit_textChanged"
        QT_MOC_LITERAL(257, 26)   // "on_BotTimeEdit_textChanged"
    },
    "SettingDialog\0startGameSignal\0\0"
    "gameModeSelectSignal\0index\0"
    "firstPlayerSelectSignal\0humanTimeEditSignal\0"
    "arg1\0botTimeEditSignal\0on_OKPushButton_clicked\0"
    "on_GameModeSelect_currentIndexChanged\0"
    "on_FirstPlayerSelect_currentIndexChanged\0"
    "on_HumanTimeEdit_textChanged\0"
    "on_BotTimeEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    1,   75,    2, 0x06,    2 /* Public */,
       5,    1,   78,    2, 0x06,    4 /* Public */,
       6,    1,   81,    2, 0x06,    6 /* Public */,
       8,    1,   84,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   87,    2, 0x08,   10 /* Private */,
      10,    1,   88,    2, 0x08,   11 /* Private */,
      11,    1,   91,    2, 0x08,   13 /* Private */,
      12,    1,   94,    2, 0x08,   15 /* Private */,
      13,    1,   97,    2, 0x08,   17 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void SettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startGameSignal(); break;
        case 1: _t->gameModeSelectSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->firstPlayerSelectSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->humanTimeEditSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->botTimeEditSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_OKPushButton_clicked(); break;
        case 6: _t->on_GameModeSelect_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_FirstPlayerSelect_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_HumanTimeEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_BotTimeEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingDialog::*)();
            if (_t _q_method = &SettingDialog::startGameSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingDialog::*)(int );
            if (_t _q_method = &SettingDialog::gameModeSelectSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingDialog::*)(int );
            if (_t _q_method = &SettingDialog::firstPlayerSelectSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SettingDialog::*)(const QString & );
            if (_t _q_method = &SettingDialog::humanTimeEditSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SettingDialog::*)(const QString & );
            if (_t _q_method = &SettingDialog::botTimeEditSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SettingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SettingDialog.offsetsAndSizes,
    qt_meta_data_SettingDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SettingDialog_t
, QtPrivate::TypeAndForceComplete<SettingDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *SettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SettingDialog::startGameSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingDialog::gameModeSelectSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingDialog::firstPlayerSelectSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingDialog::humanTimeEditSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingDialog::botTimeEditSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
