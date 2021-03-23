/****************************************************************************
** Meta object code from reading C++ file 'mask_management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Auxiliary_maintenance/mask_management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mask_management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mask_management_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mask_management_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mask_management_t qt_meta_stringdata_mask_management = {
    {
QT_MOC_LITERAL(0, 0, 15), // "mask_management"
QT_MOC_LITERAL(1, 16, 10), // "addeditems"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "de_part_produce"
QT_MOC_LITERAL(4, 44, 21), // "combobox_valuechanged"
QT_MOC_LITERAL(5, 66, 11), // "selectitems"
QT_MOC_LITERAL(6, 78, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 95, 10), // "choosefile"
QT_MOC_LITERAL(8, 106, 18), // "additems_img_spare"
QT_MOC_LITERAL(9, 125, 12), // "de_img_spare"
QT_MOC_LITERAL(10, 138, 15), // "paint_img_spare"
QT_MOC_LITERAL(11, 154, 9) // "tableshow"

    },
    "mask_management\0addeditems\0\0de_part_produce\0"
    "combobox_valuechanged\0selectitems\0"
    "QTreeWidgetItem*\0choosefile\0"
    "additems_img_spare\0de_img_spare\0"
    "paint_img_spare\0tableshow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mask_management[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       5,    2,   64,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    1,   72,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void mask_management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mask_management *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addeditems(); break;
        case 1: _t->de_part_produce(); break;
        case 2: _t->combobox_valuechanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->selectitems((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->choosefile(); break;
        case 5: _t->additems_img_spare(); break;
        case 6: _t->de_img_spare(); break;
        case 7: _t->paint_img_spare((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->tableshow(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mask_management::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mask_management.data,
    qt_meta_data_mask_management,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mask_management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mask_management::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mask_management.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mask_management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
