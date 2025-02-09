/****************************************************************************
** Meta object code from reading C++ file 'welcomewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../welcomewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WelcomeWidget_t {
    uint offsetsAndSizes[16];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_WelcomeWidget_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_WelcomeWidget_t qt_meta_stringdata_WelcomeWidget = {
    {
        QT_MOC_LITERAL(0, 13),  // "WelcomeWidget"
        QT_MOC_LITERAL(14, 14),  // "displaySetting"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 16),  // "initReplaySignal"
        QT_MOC_LITERAL(47, 16),  // "showReplaySignal"
        QT_MOC_LITERAL(64, 6),  // "number"
        QT_MOC_LITERAL(71, 28),  // "on_NewGamePushButton_clicked"
        QT_MOC_LITERAL(100, 27)   // "on_ReplayPushButton_clicked"
    },
    "WelcomeWidget\0displaySetting\0\0"
    "initReplaySignal\0showReplaySignal\0"
    "number\0on_NewGamePushButton_clicked\0"
    "on_ReplayPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WelcomeWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,
       4,    1,   46,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WelcomeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WelcomeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->displaySetting(); break;
        case 1: _t->initReplaySignal(); break;
        case 2: _t->showReplaySignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_NewGamePushButton_clicked(); break;
        case 4: _t->on_ReplayPushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WelcomeWidget::*)();
            if (_t _q_method = &WelcomeWidget::displaySetting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WelcomeWidget::*)();
            if (_t _q_method = &WelcomeWidget::initReplaySignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WelcomeWidget::*)(int );
            if (_t _q_method = &WelcomeWidget::showReplaySignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WelcomeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WelcomeWidget.offsetsAndSizes,
    qt_meta_data_WelcomeWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_WelcomeWidget_t
, QtPrivate::TypeAndForceComplete<WelcomeWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *WelcomeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WelcomeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WelcomeWidget::displaySetting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WelcomeWidget::initReplaySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WelcomeWidget::showReplaySignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
