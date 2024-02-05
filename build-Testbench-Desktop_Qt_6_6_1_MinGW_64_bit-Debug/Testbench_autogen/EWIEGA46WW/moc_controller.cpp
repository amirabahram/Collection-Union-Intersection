/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Testbench/controller.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSControllerENDCLASS = QtMocHelpers::stringData(
    "Controller",
    "writeUiReady",
    "",
    "QList<QString>&",
    "str",
    "title",
    "writeBarReady",
    "value",
    "Intersection",
    "QList<int>&",
    "inputs",
    "Unions",
    "IntersectionLimited",
    "UnionsLimited"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[4];
    char stringdata5[6];
    char stringdata6[14];
    char stringdata7[6];
    char stringdata8[13];
    char stringdata9[12];
    char stringdata10[7];
    char stringdata11[7];
    char stringdata12[20];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSControllerENDCLASS_t qt_meta_stringdata_CLASSControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Controller"
        QT_MOC_LITERAL(11, 12),  // "writeUiReady"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 15),  // "QList<QString>&"
        QT_MOC_LITERAL(41, 3),  // "str"
        QT_MOC_LITERAL(45, 5),  // "title"
        QT_MOC_LITERAL(51, 13),  // "writeBarReady"
        QT_MOC_LITERAL(65, 5),  // "value"
        QT_MOC_LITERAL(71, 12),  // "Intersection"
        QT_MOC_LITERAL(84, 11),  // "QList<int>&"
        QT_MOC_LITERAL(96, 6),  // "inputs"
        QT_MOC_LITERAL(103, 6),  // "Unions"
        QT_MOC_LITERAL(110, 19),  // "IntersectionLimited"
        QT_MOC_LITERAL(130, 13)   // "UnionsLimited"
    },
    "Controller",
    "writeUiReady",
    "",
    "QList<QString>&",
    "str",
    "title",
    "writeBarReady",
    "value",
    "Intersection",
    "QList<int>&",
    "inputs",
    "Unions",
    "IntersectionLimited",
    "UnionsLimited"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       6,    1,   55,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   58,    2, 0x0a,    6 /* Public */,
      11,    1,   61,    2, 0x0a,    8 /* Public */,
      12,    1,   64,    2, 0x0a,   10 /* Public */,
      13,    1,   67,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Controller, std::true_type>,
        // method 'writeUiReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeBarReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'Intersection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        // method 'Unions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        // method 'IntersectionLimited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        // method 'UnionsLimited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>
    >,
    nullptr
} };

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeUiReady((*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->writeBarReady((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->Intersection((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        case 3: _t->Unions((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        case 4: _t->IntersectionLimited((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        case 5: _t->UnionsLimited((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)(QList<QString> & , QString );
            if (_t _q_method = &Controller::writeUiReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Controller::*)(int );
            if (_t _q_method = &Controller::writeBarReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Controller::writeUiReady(QList<QString> & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Controller::writeBarReady(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
