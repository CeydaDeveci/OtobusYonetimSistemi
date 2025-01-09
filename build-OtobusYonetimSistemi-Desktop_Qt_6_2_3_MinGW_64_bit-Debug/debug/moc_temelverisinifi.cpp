/****************************************************************************
** Meta object code from reading C++ file 'temelverisinifi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Veri/VeriSiniflari/temelverisinifi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'temelverisinifi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TemelVeriSinifi_t {
    const uint offsetsAndSize[22];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TemelVeriSinifi_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TemelVeriSinifi_t qt_meta_stringdata_TemelVeriSinifi = {
    {
QT_MOC_LITERAL(0, 15), // "TemelVeriSinifi"
QT_MOC_LITERAL(16, 9), // "idChanged"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 7), // "TamSayi"
QT_MOC_LITERAL(35, 5), // "newId"
QT_MOC_LITERAL(41, 16), // "silindiMiChanged"
QT_MOC_LITERAL(58, 12), // "newSilindiMi"
QT_MOC_LITERAL(71, 5), // "setId"
QT_MOC_LITERAL(77, 12), // "setSilindiMi"
QT_MOC_LITERAL(90, 2), // "id"
QT_MOC_LITERAL(93, 9) // "silindiMi"

    },
    "TemelVeriSinifi\0idChanged\0\0TamSayi\0"
    "newId\0silindiMiChanged\0newSilindiMi\0"
    "setId\0setSilindiMi\0id\0silindiMi"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TemelVeriSinifi[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    3 /* Public */,
       5,    1,   41,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   44,    2, 0x0a,    7 /* Public */,
       8,    1,   47,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
       9, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      10, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

void TemelVeriSinifi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TemelVeriSinifi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idChanged((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 1: _t->silindiMiChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setId((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 3: _t->setSilindiMi((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TemelVeriSinifi::*)(TamSayi );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemelVeriSinifi::idChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TemelVeriSinifi::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TemelVeriSinifi::silindiMiChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TemelVeriSinifi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TamSayi*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->silindiMi(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TemelVeriSinifi *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< TamSayi*>(_v)); break;
        case 1: _t->setSilindiMi(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject TemelVeriSinifi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TemelVeriSinifi.offsetsAndSize,
    qt_meta_data_TemelVeriSinifi,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TemelVeriSinifi_t
, QtPrivate::TypeAndForceComplete<TamSayi, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<TemelVeriSinifi, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *TemelVeriSinifi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TemelVeriSinifi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TemelVeriSinifi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TemelVeriSinifi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TemelVeriSinifi::idChanged(TamSayi _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TemelVeriSinifi::silindiMiChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
