/****************************************************************************
** Meta object code from reading C++ file 'calisanbs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Veri/VeriSiniflari/calisanbs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calisanbs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalisanBS_t {
    const uint offsetsAndSize[32];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CalisanBS_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CalisanBS_t qt_meta_stringdata_CalisanBS = {
    {
QT_MOC_LITERAL(0, 9), // "CalisanBS"
QT_MOC_LITERAL(10, 13), // "GoreviChanged"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 5), // "Metin"
QT_MOC_LITERAL(31, 9), // "newGorevi"
QT_MOC_LITERAL(41, 16), // "CalisanIdChanged"
QT_MOC_LITERAL(58, 7), // "TamSayi"
QT_MOC_LITERAL(66, 12), // "newCalisanId"
QT_MOC_LITERAL(79, 14), // "telefonChanged"
QT_MOC_LITERAL(94, 10), // "newTelefon"
QT_MOC_LITERAL(105, 9), // "setGorevi"
QT_MOC_LITERAL(115, 12), // "setCalisanId"
QT_MOC_LITERAL(128, 10), // "setTelefon"
QT_MOC_LITERAL(139, 7), // "telefon"
QT_MOC_LITERAL(147, 6), // "Gorevi"
QT_MOC_LITERAL(154, 9) // "CalisanId"

    },
    "CalisanBS\0GoreviChanged\0\0Metin\0newGorevi\0"
    "CalisanIdChanged\0TamSayi\0newCalisanId\0"
    "telefonChanged\0newTelefon\0setGorevi\0"
    "setCalisanId\0setTelefon\0telefon\0Gorevi\0"
    "CalisanId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalisanBS[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    4 /* Public */,
       5,    1,   53,    2, 0x06,    6 /* Public */,
       8,    1,   56,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,   59,    2, 0x0a,   10 /* Public */,
      11,    1,   62,    2, 0x0a,   12 /* Public */,
      12,    1,   65,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    9,

 // properties: name, type, flags
      13, 0x80000000 | 3, 0x0001510b, uint(2), 0,
      14, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      15, 0x80000000 | 6, 0x0001510b, uint(1), 0,

       0        // eod
};

void CalisanBS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalisanBS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->GoreviChanged((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 1: _t->CalisanIdChanged((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 2: _t->telefonChanged((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 3: _t->setGorevi((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 4: _t->setCalisanId((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 5: _t->setTelefon((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CalisanBS::*)(const Metin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalisanBS::GoreviChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CalisanBS::*)(TamSayi );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalisanBS::CalisanIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CalisanBS::*)(const Metin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CalisanBS::telefonChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CalisanBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Metin*>(_v) = _t->telefon(); break;
        case 1: *reinterpret_cast< Metin*>(_v) = _t->Gorevi(); break;
        case 2: *reinterpret_cast< TamSayi*>(_v) = _t->CalisanId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CalisanBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTelefon(*reinterpret_cast< Metin*>(_v)); break;
        case 1: _t->setGorevi(*reinterpret_cast< Metin*>(_v)); break;
        case 2: _t->setCalisanId(*reinterpret_cast< TamSayi*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CalisanBS::staticMetaObject = { {
    QMetaObject::SuperData::link<Insan::staticMetaObject>(),
    qt_meta_stringdata_CalisanBS.offsetsAndSize,
    qt_meta_data_CalisanBS,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CalisanBS_t
, QtPrivate::TypeAndForceComplete<Metin, std::true_type>, QtPrivate::TypeAndForceComplete<Metin, std::true_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::true_type>, QtPrivate::TypeAndForceComplete<CalisanBS, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>


>,
    nullptr
} };


const QMetaObject *CalisanBS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalisanBS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalisanBS.stringdata0))
        return static_cast<void*>(this);
    return Insan::qt_metacast(_clname);
}

int CalisanBS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Insan::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CalisanBS::GoreviChanged(const Metin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CalisanBS::CalisanIdChanged(TamSayi _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CalisanBS::telefonChanged(const Metin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
