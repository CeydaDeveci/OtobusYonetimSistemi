/****************************************************************************
** Meta object code from reading C++ file 'yolcuformu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../OtobusYonetimSistemi/Formlar/yolcuformu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yolcuformu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YolcuFormu_t {
    const uint offsetsAndSize[6];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_YolcuFormu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_YolcuFormu_t qt_meta_stringdata_YolcuFormu = {
    {
QT_MOC_LITERAL(0, 10), // "YolcuFormu"
QT_MOC_LITERAL(11, 10), // "veriKaydet"
QT_MOC_LITERAL(22, 0) // ""

    },
    "YolcuFormu\0veriKaydet\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YolcuFormu[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void YolcuFormu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YolcuFormu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->veriKaydet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (YolcuFormu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&YolcuFormu::veriKaydet)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject YolcuFormu::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_YolcuFormu.offsetsAndSize,
    qt_meta_data_YolcuFormu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_YolcuFormu_t
, QtPrivate::TypeAndForceComplete<YolcuFormu, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *YolcuFormu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YolcuFormu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YolcuFormu.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TemelVeriFormu<YolcuPtr>"))
        return static_cast< TemelVeriFormu<YolcuPtr>*>(this);
    return QWidget::qt_metacast(_clname);
}

int YolcuFormu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void YolcuFormu::veriKaydet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
