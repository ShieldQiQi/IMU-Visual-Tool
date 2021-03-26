/****************************************************************************
** Meta object code from reading C++ file 'LinearTraceViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/window/TraceWindow/LinearTraceViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LinearTraceViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinearTraceViewModel_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinearTraceViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinearTraceViewModel_t qt_meta_stringdata_LinearTraceViewModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "LinearTraceViewModel"
QT_MOC_LITERAL(1, 21, 10), // "sendCANMsg"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "string"
QT_MOC_LITERAL(4, 40, 12), // "beforeAppend"
QT_MOC_LITERAL(5, 53, 12), // "num_messages"
QT_MOC_LITERAL(6, 66, 11), // "afterAppend"
QT_MOC_LITERAL(7, 78, 11), // "beforeClear"
QT_MOC_LITERAL(8, 90, 10) // "afterClear"

    },
    "LinearTraceViewModel\0sendCANMsg\0\0"
    "string\0beforeAppend\0num_messages\0"
    "afterAppend\0beforeClear\0afterClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinearTraceViewModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LinearTraceViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinearTraceViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCANMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->beforeAppend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->afterAppend(); break;
        case 3: _t->beforeClear(); break;
        case 4: _t->afterClear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinearTraceViewModel::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinearTraceViewModel::sendCANMsg)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LinearTraceViewModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTraceViewModel::staticMetaObject>(),
    qt_meta_stringdata_LinearTraceViewModel.data,
    qt_meta_data_LinearTraceViewModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinearTraceViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinearTraceViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinearTraceViewModel.stringdata0))
        return static_cast<void*>(this);
    return BaseTraceViewModel::qt_metacast(_clname);
}

int LinearTraceViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTraceViewModel::qt_metacall(_c, _id, _a);
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
void LinearTraceViewModel::sendCANMsg(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< LinearTraceViewModel *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
