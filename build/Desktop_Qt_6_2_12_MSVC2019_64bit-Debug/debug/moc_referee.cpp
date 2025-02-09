/****************************************************************************
** Meta object code from reading C++ file 'referee.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../referee.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'referee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Referee_t {
    uint offsetsAndSizes[38];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Referee_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Referee_t qt_meta_stringdata_Referee = {
    {
        QT_MOC_LITERAL(0, 7),  // "Referee"
        QT_MOC_LITERAL(8, 12),  // "updateSignal"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 17),  // "botFinishedSignal"
        QT_MOC_LITERAL(40, 17),  // "displayHintSignal"
        QT_MOC_LITERAL(58, 6),  // "number"
        QT_MOC_LITERAL(65, 11),  // "pauseSignal"
        QT_MOC_LITERAL(77, 5),  // "judge"
        QT_MOC_LITERAL(83, 9),  // "judgeTime"
        QT_MOC_LITERAL(93, 15),  // "setBotTimeLimit"
        QT_MOC_LITERAL(109, 4),  // "text"
        QT_MOC_LITERAL(114, 17),  // "setHumanTimeLimit"
        QT_MOC_LITERAL(132, 11),  // "setGameMode"
        QT_MOC_LITERAL(144, 5),  // "index"
        QT_MOC_LITERAL(150, 14),  // "setFirstPlayer"
        QT_MOC_LITERAL(165, 8),  // "saveGame"
        QT_MOC_LITERAL(174, 8),  // "loadGame"
        QT_MOC_LITERAL(183, 7),  // "endGame"
        QT_MOC_LITERAL(191, 15)   // "replayByHistory"
    },
    "Referee\0updateSignal\0\0botFinishedSignal\0"
    "displayHintSignal\0number\0pauseSignal\0"
    "judge\0judgeTime\0setBotTimeLimit\0text\0"
    "setHumanTimeLimit\0setGameMode\0index\0"
    "setFirstPlayer\0saveGame\0loadGame\0"
    "endGame\0replayByHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Referee[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    0,   99,    2, 0x06,    2 /* Public */,
       4,    1,  100,    2, 0x06,    3 /* Public */,
       6,    0,  103,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  104,    2, 0x0a,    6 /* Public */,
       8,    0,  105,    2, 0x0a,    7 /* Public */,
       9,    1,  106,    2, 0x0a,    8 /* Public */,
      11,    1,  109,    2, 0x0a,   10 /* Public */,
      12,    1,  112,    2, 0x0a,   12 /* Public */,
      14,    1,  115,    2, 0x0a,   14 /* Public */,
      15,    0,  118,    2, 0x0a,   16 /* Public */,
      16,    0,  119,    2, 0x0a,   17 /* Public */,
      17,    0,  120,    2, 0x0a,   18 /* Public */,
      18,    0,  121,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Referee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Referee *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateSignal(); break;
        case 1: _t->botFinishedSignal(); break;
        case 2: _t->displayHintSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->pauseSignal(); break;
        case 4: _t->judge(); break;
        case 5: _t->judgeTime(); break;
        case 6: _t->setBotTimeLimit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setHumanTimeLimit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setGameMode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setFirstPlayer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->saveGame(); break;
        case 11: _t->loadGame(); break;
        case 12: _t->endGame(); break;
        case 13: _t->replayByHistory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Referee::*)();
            if (_t _q_method = &Referee::updateSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Referee::*)();
            if (_t _q_method = &Referee::botFinishedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Referee::*)(int );
            if (_t _q_method = &Referee::displayHintSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Referee::*)();
            if (_t _q_method = &Referee::pauseSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Referee::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Referee.offsetsAndSizes,
    qt_meta_data_Referee,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Referee_t
, QtPrivate::TypeAndForceComplete<Referee, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Referee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Referee::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Referee.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Referee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Referee::updateSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Referee::botFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Referee::displayHintSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Referee::pauseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
