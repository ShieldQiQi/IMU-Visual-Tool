/****************************************************************************
** Meta object code from reading C++ file 'GenericCanSetupPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/driver/GenericCanSetupPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GenericCanSetupPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GenericCanSetupPage_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GenericCanSetupPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GenericCanSetupPage_t qt_meta_stringdata_GenericCanSetupPage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GenericCanSetupPage"
QT_MOC_LITERAL(1, 20, 20), // "onSetupDialogCreated"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "SetupDialog&"
QT_MOC_LITERAL(4, 55, 3), // "dlg"
QT_MOC_LITERAL(5, 59, 19), // "onShowInterfacePage"
QT_MOC_LITERAL(6, 79, 21), // "MeasurementInterface*"
QT_MOC_LITERAL(7, 101, 2), // "mi"
QT_MOC_LITERAL(8, 104, 8) // "updateUI"

    },
    "GenericCanSetupPage\0onSetupDialogCreated\0"
    "\0SetupDialog&\0dlg\0onShowInterfacePage\0"
    "MeasurementInterface*\0mi\0updateUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GenericCanSetupPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    2,   32,    2, 0x0a /* Public */,
       8,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void,

       0        // eod
};

void GenericCanSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericCanSetupPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSetupDialogCreated((*reinterpret_cast< SetupDialog(*)>(_a[1]))); break;
        case 1: _t->onShowInterfacePage((*reinterpret_cast< SetupDialog(*)>(_a[1])),(*reinterpret_cast< MeasurementInterface*(*)>(_a[2]))); break;
        case 2: _t->updateUI(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GenericCanSetupPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GenericCanSetupPage.data,
    qt_meta_data_GenericCanSetupPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GenericCanSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericCanSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GenericCanSetupPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GenericCanSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
