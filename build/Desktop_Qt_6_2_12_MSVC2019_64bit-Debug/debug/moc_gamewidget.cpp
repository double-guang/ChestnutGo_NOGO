/****************************************************************************
** Meta object code from reading C++ file 'gamewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../gamewidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameWidget_t {
    uint offsetsAndSizes[34];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GameWidget_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_GameWidget_t qt_meta_stringdata_GameWidget = {
    {
        QT_MOC_LITERAL(0, 10),  // "GameWidget"
        QT_MOC_LITERAL(11, 7),  // "display"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 3),  // "num"
        QT_MOC_LITERAL(24, 14),  // "showGameSignal"
        QT_MOC_LITERAL(39, 6),  // "number"
        QT_MOC_LITERAL(46, 17),  // "showWelcomeSignal"
        QT_MOC_LITERAL(64, 11),  // "startUpdate"
        QT_MOC_LITERAL(76, 8),  // "initGame"
        QT_MOC_LITERAL(85, 10),  // "initReplay"
        QT_MOC_LITERAL(96, 15),  // "showAboutWidget"
        QT_MOC_LITERAL(112, 28),  // "on_RestartPushButton_clicked"
        QT_MOC_LITERAL(141, 26),  // "on_PausePushButton_clicked"
        QT_MOC_LITERAL(168, 26),  // "on_ReactPushButton_clicked"
        QT_MOC_LITERAL(195, 25),  // "on_HintPushButton_clicked"
        QT_MOC_LITERAL(221, 27),  // "on_ReturnPushButton_clicked"
        QT_MOC_LITERAL(249, 11)   // "displayHint"
    },
    "GameWidget\0display\0\0num\0showGameSignal\0"
    "number\0showWelcomeSignal\0startUpdate\0"
    "initGame\0initReplay\0showAboutWidget\0"
    "on_RestartPushButton_clicked\0"
    "on_PausePushButton_clicked\0"
    "on_ReactPushButton_clicked\0"
    "on_HintPushButton_clicked\0"
    "on_ReturnPushButton_clicked\0displayHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       4,    1,   95,    2, 0x06,    3 /* Public */,
       6,    1,   98,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  101,    2, 0x0a,    7 /* Public */,
       8,    0,  102,    2, 0x0a,    8 /* Public */,
       9,    0,  103,    2, 0x0a,    9 /* Public */,
      10,    0,  104,    2, 0x0a,   10 /* Public */,
      11,    0,  105,    2, 0x08,   11 /* Private */,
      12,    0,  106,    2, 0x08,   12 /* Private */,
      13,    0,  107,    2, 0x08,   13 /* Private */,
      14,    0,  108,    2, 0x08,   14 /* Private */,
      15,    0,  109,    2, 0x08,   15 /* Private */,
      16,    1,  110,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void GameWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->showGameSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->showWelcomeSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->startUpdate(); break;
        case 4: _t->initGame(); break;
        case 5: _t->initReplay(); break;
        case 6: _t->showAboutWidget(); break;
        case 7: _t->on_RestartPushButton_clicked(); break;
        case 8: _t->on_PausePushButton_clicked(); break;
        case 9: _t->on_ReactPushButton_clicked(); break;
        case 10: _t->on_HintPushButton_clicked(); break;
        case 11: _t->on_ReturnPushButton_clicked(); break;
        case 12: _t->displayHint((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameWidget::*)(int );
            if (_t _q_method = &GameWidget::display; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)(int );
            if (_t _q_method = &GameWidget::showGameSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameWidget::*)(int );
            if (_t _q_method = &GameWidget::showWelcomeSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject GameWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameWidget.offsetsAndSizes,
    qt_meta_data_GameWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameWidget_t
, QtPrivate::TypeAndForceComplete<GameWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *GameWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void GameWidget::display(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameWidget::showGameSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GameWidget::showWelcomeSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
