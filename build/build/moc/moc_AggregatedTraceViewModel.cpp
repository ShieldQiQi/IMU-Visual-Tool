/****************************************************************************
** Meta object code from reading C++ file 'AggregatedTraceViewModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/window/TraceWindow/AggregatedTraceViewModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AggregatedTraceViewModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AggregatedTraceViewModel_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AggregatedTraceViewModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AggregatedTraceViewModel_t qt_meta_stringdata_AggregatedTraceViewModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AggregatedTraceViewModel"
QT_MOC_LITERAL(1, 25, 10), // "createItem"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "CanMessage"
QT_MOC_LITERAL(4, 48, 3), // "msg"
QT_MOC_LITERAL(5, 52, 10), // "updateItem"
QT_MOC_LITERAL(6, 63, 13), // "onUpdateModel"
QT_MOC_LITERAL(7, 77, 14), // "onSetupChanged"
QT_MOC_LITERAL(8, 92, 12), // "beforeAppend"
QT_MOC_LITERAL(9, 105, 12), // "num_messages"
QT_MOC_LITERAL(10, 118, 11), // "beforeClear"
QT_MOC_LITERAL(11, 130, 10) // "afterClear"

    },
    "AggregatedTraceViewModel\0createItem\0"
    "\0CanMessage\0msg\0updateItem\0onUpdateModel\0"
    "onSetupChanged\0beforeAppend\0num_messages\0"
    "beforeClear\0afterClear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AggregatedTraceViewModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    1,   57,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AggregatedTraceViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AggregatedTraceViewModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createItem((*reinterpret_cast< const CanMessage(*)>(_a[1]))); break;
        case 1: _t->updateItem((*reinterpret_cast< const CanMessage(*)>(_a[1]))); break;
        case 2: _t->onUpdateModel(); break;
        case 3: _t->onSetupChanged(); break;
        case 4: _t->beforeAppend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->beforeClear(); break;
        case 6: _t->afterClear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AggregatedTraceViewModel::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTraceViewModel::staticMetaObject>(),
    qt_meta_stringdata_AggregatedTraceViewModel.data,
    qt_meta_data_AggregatedTraceViewModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AggregatedTraceViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AggregatedTraceViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AggregatedTraceViewModel.stringdata0))
        return static_cast<void*>(this);
    return BaseTraceViewModel::qt_metacast(_clname);
}

int AggregatedTraceViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTraceViewModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
