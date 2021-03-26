/****************************************************************************
** Meta object code from reading C++ file 'CanTrace.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/CanTrace.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CanTrace.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanTrace_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanTrace_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanTrace_t qt_meta_stringdata_CanTrace = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CanTrace"
QT_MOC_LITERAL(1, 9, 15), // "messageEnqueued"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "idx"
QT_MOC_LITERAL(4, 30, 12), // "beforeAppend"
QT_MOC_LITERAL(5, 43, 12), // "num_messages"
QT_MOC_LITERAL(6, 56, 11), // "afterAppend"
QT_MOC_LITERAL(7, 68, 11), // "beforeClear"
QT_MOC_LITERAL(8, 80, 10), // "afterClear"
QT_MOC_LITERAL(9, 91, 10) // "flushQueue"

    },
    "CanTrace\0messageEnqueued\0\0idx\0"
    "beforeAppend\0num_messages\0afterAppend\0"
    "beforeClear\0afterClear\0flushQueue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanTrace[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    0,   50,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CanTrace::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanTrace *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageEnqueued((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->beforeAppend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->afterAppend(); break;
        case 3: _t->beforeClear(); break;
        case 4: _t->afterClear(); break;
        case 5: _t->flushQueue(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanTrace::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanTrace::messageEnqueued)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CanTrace::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanTrace::beforeAppend)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CanTrace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanTrace::afterAppend)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CanTrace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanTrace::beforeClear)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CanTrace::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanTrace::afterClear)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CanTrace::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CanTrace.data,
    qt_meta_data_CanTrace,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CanTrace::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanTrace::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CanTrace.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CanTrace::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CanTrace::messageEnqueued(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CanTrace::beforeAppend(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CanTrace::afterAppend()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CanTrace::beforeClear()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void CanTrace::afterClear()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
