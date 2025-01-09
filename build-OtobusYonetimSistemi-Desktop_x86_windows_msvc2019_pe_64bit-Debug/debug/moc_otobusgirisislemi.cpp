/****************************************************************************
** Meta object code from reading C++ file 'otobusgirisislemi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Islemler/VeriGirisi/otobusgirisislemi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'otobusgirisislemi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OtobusGirisIslemi_t {
    const uint offsetsAndSize[8];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_OtobusGirisIslemi_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_OtobusGirisIslemi_t qt_meta_stringdata_OtobusGirisIslemi = {
    {
QT_MOC_LITERAL(0, 17), // "OtobusGirisIslemi"
QT_MOC_LITERAL(18, 4), // "main"
QT_MOC_LITERAL(23, 0), // ""
QT_MOC_LITERAL(24, 8) // "depoEkle"

    },
    "OtobusGirisIslemi\0main\0\0depoEkle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OtobusGirisIslemi[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OtobusGirisIslemi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OtobusGirisIslemi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->main(); break;
        case 1: _t->depoEkle(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject OtobusGirisIslemi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OtobusGirisIslemi.offsetsAndSize,
    qt_meta_data_OtobusGirisIslemi,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_OtobusGirisIslemi_t
, QtPrivate::TypeAndForceComplete<OtobusGirisIslemi, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *OtobusGirisIslemi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OtobusGirisIslemi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OtobusGirisIslemi.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TemelKullaniciIslemi"))
        return static_cast< TemelKullaniciIslemi*>(this);
    return QObject::qt_metacast(_clname);
}

int OtobusGirisIslemi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
