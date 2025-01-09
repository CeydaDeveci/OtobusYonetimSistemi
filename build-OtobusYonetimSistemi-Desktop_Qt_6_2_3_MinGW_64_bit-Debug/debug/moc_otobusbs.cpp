/****************************************************************************
** Meta object code from reading C++ file 'otobusbs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Veri/VeriSiniflari/otobusbs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'otobusbs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OtobusBS_t {
    const uint offsetsAndSize[40];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_OtobusBS_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_OtobusBS_t qt_meta_stringdata_OtobusBS = {
    {
QT_MOC_LITERAL(0, 8), // "OtobusBS"
QT_MOC_LITERAL(9, 20), // "otobusPlakasiChanged"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 5), // "Metin"
QT_MOC_LITERAL(37, 16), // "newOtobusPlakasi"
QT_MOC_LITERAL(54, 25), // "otobusKoltukSayisiChanged"
QT_MOC_LITERAL(80, 7), // "TamSayi"
QT_MOC_LITERAL(88, 21), // "newOtobusKoltukSayisi"
QT_MOC_LITERAL(110, 22), // "valizKapasitesiChanged"
QT_MOC_LITERAL(133, 18), // "newValizKapasitesi"
QT_MOC_LITERAL(152, 15), // "OtobusIdChanged"
QT_MOC_LITERAL(168, 11), // "newOtobusId"
QT_MOC_LITERAL(180, 16), // "setOtobusPlakasi"
QT_MOC_LITERAL(197, 21), // "setOtobusKoltukSayisi"
QT_MOC_LITERAL(219, 18), // "setValizKapasitesi"
QT_MOC_LITERAL(238, 11), // "setOtobusId"
QT_MOC_LITERAL(250, 13), // "otobusPlakasi"
QT_MOC_LITERAL(264, 18), // "otobusKoltukSayisi"
QT_MOC_LITERAL(283, 15), // "valizKapasitesi"
QT_MOC_LITERAL(299, 8) // "OtobusId"

    },
    "OtobusBS\0otobusPlakasiChanged\0\0Metin\0"
    "newOtobusPlakasi\0otobusKoltukSayisiChanged\0"
    "TamSayi\0newOtobusKoltukSayisi\0"
    "valizKapasitesiChanged\0newValizKapasitesi\0"
    "OtobusIdChanged\0newOtobusId\0"
    "setOtobusPlakasi\0setOtobusKoltukSayisi\0"
    "setValizKapasitesi\0setOtobusId\0"
    "otobusPlakasi\0otobusKoltukSayisi\0"
    "valizKapasitesi\0OtobusId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OtobusBS[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    5 /* Public */,
       5,    1,   65,    2, 0x06,    7 /* Public */,
       8,    1,   68,    2, 0x06,    9 /* Public */,
      10,    1,   71,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   74,    2, 0x0a,   13 /* Public */,
      13,    1,   77,    2, 0x0a,   15 /* Public */,
      14,    1,   80,    2, 0x0a,   17 /* Public */,
      15,    1,   83,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, 0x80000000 | 6,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void, 0x80000000 | 6,   11,

 // properties: name, type, flags
      16, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      17, 0x80000000 | 6, 0x0001510b, uint(1), 0,
      18, 0x80000000 | 3, 0x0001510b, uint(2), 0,
      19, 0x80000000 | 6, 0x0001510b, uint(3), 0,

       0        // eod
};

void OtobusBS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OtobusBS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->otobusPlakasiChanged((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 1: _t->otobusKoltukSayisiChanged((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 2: _t->valizKapasitesiChanged((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 3: _t->OtobusIdChanged((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 4: _t->setOtobusPlakasi((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 5: _t->setOtobusKoltukSayisi((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 6: _t->setValizKapasitesi((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 7: _t->setOtobusId((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OtobusBS::*)(const Metin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OtobusBS::otobusPlakasiChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OtobusBS::*)(TamSayi );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OtobusBS::otobusKoltukSayisiChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OtobusBS::*)(const Metin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OtobusBS::valizKapasitesiChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OtobusBS::*)(TamSayi );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OtobusBS::OtobusIdChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OtobusBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Metin*>(_v) = _t->otobusPlakasi(); break;
        case 1: *reinterpret_cast< TamSayi*>(_v) = _t->otobusKoltukSayisi(); break;
        case 2: *reinterpret_cast< Metin*>(_v) = _t->valizKapasitesi(); break;
        case 3: *reinterpret_cast< TamSayi*>(_v) = _t->OtobusId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OtobusBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOtobusPlakasi(*reinterpret_cast< Metin*>(_v)); break;
        case 1: _t->setOtobusKoltukSayisi(*reinterpret_cast< TamSayi*>(_v)); break;
        case 2: _t->setValizKapasitesi(*reinterpret_cast< Metin*>(_v)); break;
        case 3: _t->setOtobusId(*reinterpret_cast< TamSayi*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject OtobusBS::staticMetaObject = { {
    QMetaObject::SuperData::link<TemelVeriSinifi::staticMetaObject>(),
    qt_meta_stringdata_OtobusBS.offsetsAndSize,
    qt_meta_data_OtobusBS,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_OtobusBS_t
, QtPrivate::TypeAndForceComplete<Metin, std::true_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::true_type>, QtPrivate::TypeAndForceComplete<Metin, std::true_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::true_type>, QtPrivate::TypeAndForceComplete<OtobusBS, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>


>,
    nullptr
} };


const QMetaObject *OtobusBS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OtobusBS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OtobusBS.stringdata0))
        return static_cast<void*>(this);
    return TemelVeriSinifi::qt_metacast(_clname);
}

int OtobusBS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TemelVeriSinifi::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void OtobusBS::otobusPlakasiChanged(const Metin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OtobusBS::otobusKoltukSayisiChanged(TamSayi _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OtobusBS::valizKapasitesiChanged(const Metin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OtobusBS::OtobusIdChanged(TamSayi _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
