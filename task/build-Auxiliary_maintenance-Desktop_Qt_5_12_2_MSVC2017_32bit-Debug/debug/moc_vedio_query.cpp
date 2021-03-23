/****************************************************************************
** Meta object code from reading C++ file 'vedio_query.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Auxiliary_maintenance/vedio_query.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vedio_query.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vedio_query_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vedio_query_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vedio_query_t qt_meta_stringdata_vedio_query = {
    {
QT_MOC_LITERAL(0, 0, 11), // "vedio_query"
QT_MOC_LITERAL(1, 12, 8), // "OnSlider"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 17), // "OnDurationChanged"
QT_MOC_LITERAL(4, 40, 15), // "openBtn_clicked"
QT_MOC_LITERAL(5, 56, 21), // "play_pauseBtn_clicked"
QT_MOC_LITERAL(6, 78, 15), // "stopBtn_clicked"
QT_MOC_LITERAL(7, 94, 11), // "selectitems"
QT_MOC_LITERAL(8, 106, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 123, 11), // "modify_text"
QT_MOC_LITERAL(10, 135, 12) // "delete_vedio"

    },
    "vedio_query\0OnSlider\0\0OnDurationChanged\0"
    "openBtn_clicked\0play_pauseBtn_clicked\0"
    "stopBtn_clicked\0selectitems\0"
    "QTreeWidgetItem*\0modify_text\0delete_vedio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vedio_query[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       3,    1,   57,    2, 0x0a /* Public */,
       4,    0,   60,    2, 0x08 /* Private */,
       5,    0,   61,    2, 0x08 /* Private */,
       6,    0,   62,    2, 0x08 /* Private */,
       7,    2,   63,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vedio_query::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<vedio_query *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnSlider((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->OnDurationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->openBtn_clicked(); break;
        case 3: _t->play_pauseBtn_clicked(); break;
        case 4: _t->stopBtn_clicked(); break;
        case 5: _t->selectitems((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->modify_text(); break;
        case 7: _t->delete_vedio(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject vedio_query::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_vedio_query.data,
    qt_meta_data_vedio_query,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *vedio_query::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vedio_query::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vedio_query.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int vedio_query::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
