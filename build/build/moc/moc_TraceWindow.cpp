/****************************************************************************
** Meta object code from reading C++ file 'TraceWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/window/TraceWindow/TraceWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TraceWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TraceWindow_t {
    QByteArrayData data[15];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TraceWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TraceWindow_t qt_meta_stringdata_TraceWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TraceWindow"
QT_MOC_LITERAL(1, 12, 10), // "sendCANMsg"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "string"
QT_MOC_LITERAL(4, 31, 12), // "rowsInserted"
QT_MOC_LITERAL(5, 44, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 56, 6), // "parent"
QT_MOC_LITERAL(7, 63, 5), // "first"
QT_MOC_LITERAL(8, 69, 4), // "last"
QT_MOC_LITERAL(9, 74, 10), // "passCANMsg"
QT_MOC_LITERAL(10, 85, 28), // "on_cbAggregated_stateChanged"
QT_MOC_LITERAL(11, 114, 1), // "i"
QT_MOC_LITERAL(12, 116, 28), // "on_cbAutoScroll_stateChanged"
QT_MOC_LITERAL(13, 145, 38), // "on_cbTimestampMode_currentInd..."
QT_MOC_LITERAL(14, 184, 5) // "index"

    },
    "TraceWindow\0sendCANMsg\0\0string\0"
    "rowsInserted\0QModelIndex\0parent\0first\0"
    "last\0passCANMsg\0on_cbAggregated_stateChanged\0"
    "i\0on_cbAutoScroll_stateChanged\0"
    "on_cbTimestampMode_currentIndexChanged\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TraceWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   47,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x08 /* Private */,
      12,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void TraceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TraceWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendCANMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->passCANMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_cbAggregated_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_cbAutoScroll_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_cbTimestampMode_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TraceWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TraceWindow::sendCANMsg)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TraceWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigurableWidget::staticMetaObject>(),
    qt_meta_stringdata_TraceWindow.data,
    qt_meta_data_TraceWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TraceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TraceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TraceWindow.stringdata0))
        return static_cast<void*>(this);
    return ConfigurableWidget::qt_metacast(_clname);
}

int TraceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurableWidget::qt_metacall(_c, _id, _a);
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
void TraceWindow::sendCANMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
