/****************************************************************************
** Meta object code from reading C++ file 'option.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../option.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'option.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Option_t {
    QByteArrayData data[19];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Option_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Option_t qt_meta_stringdata_Option = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Option"
QT_MOC_LITERAL(1, 7, 13), // "setthresValue"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "value"
QT_MOC_LITERAL(4, 28, 13), // "setScaleValue"
QT_MOC_LITERAL(5, 42, 10), // "setSpinBox"
QT_MOC_LITERAL(6, 53, 7), // "rb_flip"
QT_MOC_LITERAL(7, 61, 7), // "rb_bgup"
QT_MOC_LITERAL(8, 69, 6), // "rb_mod"
QT_MOC_LITERAL(9, 76, 9), // "rb_origin"
QT_MOC_LITERAL(10, 86, 8), // "rb_sight"
QT_MOC_LITERAL(11, 95, 9), // "rb_smooth"
QT_MOC_LITERAL(12, 105, 14), // "setbrightValue"
QT_MOC_LITERAL(13, 120, 16), // "setContrastValue"
QT_MOC_LITERAL(14, 137, 19), // "setSpinBox_contrast"
QT_MOC_LITERAL(15, 157, 8), // "rb_auto1"
QT_MOC_LITERAL(16, 166, 7), // "rb_nest"
QT_MOC_LITERAL(17, 174, 8), // "rb_auto2"
QT_MOC_LITERAL(18, 183, 12) // "rb_nestLimit"

    },
    "Option\0setthresValue\0\0value\0setScaleValue\0"
    "setSpinBox\0rb_flip\0rb_bgup\0rb_mod\0"
    "rb_origin\0rb_sight\0rb_smooth\0"
    "setbrightValue\0setContrastValue\0"
    "setSpinBox_contrast\0rb_auto1\0rb_nest\0"
    "rb_auto2\0rb_nestLimit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Option[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    1,   97,    2, 0x08 /* Private */,
       5,    0,  100,    2, 0x08 /* Private */,
       6,    0,  101,    2, 0x08 /* Private */,
       7,    0,  102,    2, 0x08 /* Private */,
       8,    0,  103,    2, 0x08 /* Private */,
       9,    0,  104,    2, 0x08 /* Private */,
      10,    0,  105,    2, 0x08 /* Private */,
      11,    0,  106,    2, 0x08 /* Private */,
      12,    1,  107,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Option::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Option *_t = static_cast<Option *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setthresValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setScaleValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setSpinBox(); break;
        case 3: _t->rb_flip(); break;
        case 4: _t->rb_bgup(); break;
        case 5: _t->rb_mod(); break;
        case 6: _t->rb_origin(); break;
        case 7: _t->rb_sight(); break;
        case 8: _t->rb_smooth(); break;
        case 9: _t->setbrightValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setContrastValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setSpinBox_contrast(); break;
        case 12: _t->rb_auto1(); break;
        case 13: _t->rb_nest(); break;
        case 14: _t->rb_auto2(); break;
        case 15: _t->rb_nestLimit(); break;
        default: ;
        }
    }
}

const QMetaObject Option::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Option.data,
      qt_meta_data_Option,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Option::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Option::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Option.stringdata0))
        return static_cast<void*>(const_cast< Option*>(this));
    return QDialog::qt_metacast(_clname);
}

int Option::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
