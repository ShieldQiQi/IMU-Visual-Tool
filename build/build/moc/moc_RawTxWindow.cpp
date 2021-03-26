/****************************************************************************
** Meta object code from reading C++ file 'RawTxWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/window/RawTxWindow/RawTxWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RawTxWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RawTxWindow_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RawTxWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RawTxWindow_t qt_meta_stringdata_RawTxWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RawTxWindow"
QT_MOC_LITERAL(1, 12, 9), // "changeDLC"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "dlc"
QT_MOC_LITERAL(4, 27, 16), // "changeRepeatRate"
QT_MOC_LITERAL(5, 44, 2), // "ms"
QT_MOC_LITERAL(6, 47, 17), // "sendRepeatMessage"
QT_MOC_LITERAL(7, 65, 6), // "enable"
QT_MOC_LITERAL(8, 72, 14) // "sendRawMessage"

    },
    "RawTxWindow\0changeDLC\0\0dlc\0changeRepeatRate\0"
    "ms\0sendRepeatMessage\0enable\0sendRawMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RawTxWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void RawTxWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RawTxWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeDLC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeRepeatRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendRepeatMessage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendRawMessage(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RawTxWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<ConfigurableWidget::staticMetaObject>(),
    qt_meta_stringdata_RawTxWindow.data,
    qt_meta_data_RawTxWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RawTxWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RawTxWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RawTxWindow.stringdata0))
        return static_cast<void*>(this);
    return ConfigurableWidget::qt_metacast(_clname);
}

int RawTxWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigurableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
