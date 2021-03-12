/****************************************************************************
** Meta object code from reading C++ file 'myinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Auxiliary_maintenance/myinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Myinterface_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Myinterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Myinterface_t qt_meta_stringdata_Myinterface = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Myinterface"
QT_MOC_LITERAL(1, 12, 8), // "Priority"
QT_MOC_LITERAL(2, 21, 7), // "sign_in"
QT_MOC_LITERAL(3, 29, 12), // "personal_inf"
QT_MOC_LITERAL(4, 42, 15), // "user_management"
QT_MOC_LITERAL(5, 58, 15), // "mask_management"
QT_MOC_LITERAL(6, 74, 11), // "vedio_query"
QT_MOC_LITERAL(7, 86, 10), // "vedio_clip"
QT_MOC_LITERAL(8, 97, 16) // "maintenance_mask"

    },
    "Myinterface\0Priority\0sign_in\0personal_inf\0"
    "user_management\0mask_management\0"
    "vedio_query\0vedio_clip\0maintenance_mask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Myinterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    7,   19,

 // enum data: key, value
       2, uint(Myinterface::sign_in),
       3, uint(Myinterface::personal_inf),
       4, uint(Myinterface::user_management),
       5, uint(Myinterface::mask_management),
       6, uint(Myinterface::vedio_query),
       7, uint(Myinterface::vedio_clip),
       8, uint(Myinterface::maintenance_mask),

       0        // eod
};

void Myinterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Myinterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Myinterface.data,
    qt_meta_data_Myinterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Myinterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Myinterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Myinterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Myinterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
