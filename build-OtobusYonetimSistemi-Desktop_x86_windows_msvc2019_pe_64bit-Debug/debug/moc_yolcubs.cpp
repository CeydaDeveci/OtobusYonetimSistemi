/****************************************************************************
** Meta object code from reading C++ file 'yolcubs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Veri/VeriSiniflari/yolcubs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yolcubs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YolcuBS_t {
    const uint offsetsAndSize[24];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_YolcuBS_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_YolcuBS_t qt_meta_stringdata_YolcuBS = {
    {
QT_MOC_LITERAL(0, 7), // "YolcuBS"
QT_MOC_LITERAL(8, 20), // "BiletNumarasiChanged"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 5), // "Metin"
QT_MOC_LITERAL(36, 16), // "newBiletNumarasi"
QT_MOC_LITERAL(53, 14), // "yolcuIdChanged"
QT_MOC_LITERAL(68, 7), // "TamSayi"
QT_MOC_LITERAL(76, 10), // "newYolcuId"
QT_MOC_LITERAL(87, 16), // "setBiletNumarasi"
QT_MOC_LITERAL(104, 10), // "setYolcuId"
QT_MOC_LITERAL(115, 13), // "BiletNumarasi"
QT_MOC_LITERAL(129, 7) // "yolcuId"

    },
    "YolcuBS\0BiletNumarasiChanged\0\0Metin\0"
    "newBiletNumarasi\0yolcuIdChanged\0TamSayi\0"
    "newYolcuId\0setBiletNumarasi\0setYolcuId\0"
    "BiletNumarasi\0yolcuId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YolcuBS[] = {

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
       8,    1,   44,    2, 0x0a,    7 /* Public */,
       9,    1,   47,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
      10, 0x80000000 | 3, 0x0001510b, uint(0), 0,
      11, 0x80000000 | 6, 0x0001510b, uint(1), 0,

       0        // eod
};

void YolcuBS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YolcuBS *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->BiletNumarasiChanged((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 1: _t->yolcuIdChanged((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        case 2: _t->setBiletNumarasi((*reinterpret_cast< const Metin(*)>(_a[1]))); break;
        case 3: _t->setYolcuId((*reinterpret_cast< TamSayi(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (YolcuBS::*)(const Metin & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YolcuBS::BiletNumarasiChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (YolcuBS::*)(TamSayi );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YolcuBS::yolcuIdChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<YolcuBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Metin*>(_v) = _t->BiletNumarasi(); break;
        case 1: *reinterpret_cast< TamSayi*>(_v) = _t->yolcuId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<YolcuBS *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBiletNumarasi(*reinterpret_cast< Metin*>(_v)); break;
        case 1: _t->setYolcuId(*reinterpret_cast< TamSayi*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject YolcuBS::staticMetaObject = { {
    QMetaObject::SuperData::link<Insan::staticMetaObject>(),
    qt_meta_stringdata_YolcuBS.offsetsAndSize,
    qt_meta_data_YolcuBS,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_YolcuBS_t
, QtPrivate::TypeAndForceComplete<Metin, std::true_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::true_type>, QtPrivate::TypeAndForceComplete<YolcuBS, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Metin &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<TamSayi, std::false_type>


>,
    nullptr
} };


const QMetaObject *YolcuBS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YolcuBS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YolcuBS.stringdata0))
        return static_cast<void*>(this);
    return Insan::qt_metacast(_clname);
}

int YolcuBS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Insan::qt_metacall(_c, _id, _a);
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
void YolcuBS::BiletNumarasiChanged(const Metin & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void YolcuBS::yolcuIdChanged(TamSayi _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
