/****************************************************************************
** Meta object code from reading C++ file 'Backend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/Backend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Backend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Backend_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Backend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Backend_t qt_meta_stringdata_Backend = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Backend"
QT_MOC_LITERAL(1, 8, 16), // "beginMeasurement"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "endMeasurement"
QT_MOC_LITERAL(4, 41, 14), // "onSetupChanged"
QT_MOC_LITERAL(5, 56, 12), // "onLogMessage"
QT_MOC_LITERAL(6, 69, 2), // "dt"
QT_MOC_LITERAL(7, 72, 11), // "log_level_t"
QT_MOC_LITERAL(8, 84, 5), // "level"
QT_MOC_LITERAL(9, 90, 3), // "msg"
QT_MOC_LITERAL(10, 94, 20), // "onSetupDialogCreated"
QT_MOC_LITERAL(11, 115, 12), // "SetupDialog&"
QT_MOC_LITERAL(12, 128, 3) // "dlg"

    },
    "Backend\0beginMeasurement\0\0endMeasurement\0"
    "onSetupChanged\0onLogMessage\0dt\0"
    "log_level_t\0level\0msg\0onSetupDialogCreated\0"
    "SetupDialog&\0dlg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Backend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    3,   42,    2, 0x06 /* Public */,
      10,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, 0x80000000 | 7, QMetaType::QString,    6,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void Backend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Backend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginMeasurement(); break;
        case 1: _t->endMeasurement(); break;
        case 2: _t->onSetupChanged(); break;
        case 3: _t->onLogMessage((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const log_level_t(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->onSetupDialogCreated((*reinterpret_cast< SetupDialog(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Backend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Backend::beginMeasurement)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Backend::endMeasurement)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Backend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Backend::onSetupChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Backend::*)(const QDateTime , const log_level_t , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Backend::onLogMessage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Backend::*)(SetupDialog & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Backend::onSetupDialogCreated)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Backend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Backend.data,
    qt_meta_data_Backend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Backend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Backend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Backend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Backend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Backend::beginMeasurement()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Backend::endMeasurement()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Backend::onSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Backend::onLogMessage(const QDateTime _t1, const log_level_t _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Backend::onSetupDialogCreated(SetupDialog & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
