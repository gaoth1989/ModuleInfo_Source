/****************************************************************************
** Meta object code from reading C++ file 'cameraabout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../cameraabout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameraabout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraAbout_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraAbout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraAbout_t qt_meta_stringdata_CameraAbout = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CameraAbout"
QT_MOC_LITERAL(1, 12, 11), // "sig_save_ok"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "slot_setCameraData"
QT_MOC_LITERAL(4, 44, 20), // "QList<imrCameraData>"
QT_MOC_LITERAL(5, 65, 4), // "data"
QT_MOC_LITERAL(6, 70, 17), // "slot_setCameraImu"
QT_MOC_LITERAL(7, 88, 3) // "imu"

    },
    "CameraAbout\0sig_save_ok\0\0slot_setCameraData\0"
    "QList<imrCameraData>\0data\0slot_setCameraImu\0"
    "imu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraAbout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void CameraAbout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraAbout *_t = static_cast<CameraAbout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_save_ok(); break;
        case 1: _t->slot_setCameraData((*reinterpret_cast< QList<imrCameraData>(*)>(_a[1]))); break;
        case 2: _t->slot_setCameraImu((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CameraAbout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraAbout::sig_save_ok)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CameraAbout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CameraAbout.data,
      qt_meta_data_CameraAbout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CameraAbout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraAbout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraAbout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraAbout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CameraAbout::sig_save_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE