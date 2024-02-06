/****************************************************************************
** Meta object code from reading C++ file 'controllerconcurrent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Testbench/controllerconcurrent.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controllerconcurrent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSControllerConcurrentENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSControllerConcurrentENDCLASS = QtMocHelpers::stringData(
    "ControllerConcurrent",
    "writeUiReady",
    "",
    "QList<QString>&",
    "str",
    "title",
    "writeUiReadyUnion",
    "QList<int>&",
    "num",
    "writeBarReady",
    "value",
    "IntersectionConcurrent",
    "inputs",
    "UnionsConcurrent"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSControllerConcurrentENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[21];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[4];
    char stringdata5[6];
    char stringdata6[18];
    char stringdata7[12];
    char stringdata8[4];
    char stringdata9[14];
    char stringdata10[6];
    char stringdata11[23];
    char stringdata12[7];
    char stringdata13[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSControllerConcurrentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSControllerConcurrentENDCLASS_t qt_meta_stringdata_CLASSControllerConcurrentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "ControllerConcurrent"
        QT_MOC_LITERAL(21, 12),  // "writeUiReady"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 15),  // "QList<QString>&"
        QT_MOC_LITERAL(51, 3),  // "str"
        QT_MOC_LITERAL(55, 5),  // "title"
        QT_MOC_LITERAL(61, 17),  // "writeUiReadyUnion"
        QT_MOC_LITERAL(79, 11),  // "QList<int>&"
        QT_MOC_LITERAL(91, 3),  // "num"
        QT_MOC_LITERAL(95, 13),  // "writeBarReady"
        QT_MOC_LITERAL(109, 5),  // "value"
        QT_MOC_LITERAL(115, 22),  // "IntersectionConcurrent"
        QT_MOC_LITERAL(138, 6),  // "inputs"
        QT_MOC_LITERAL(145, 16)   // "UnionsConcurrent"
    },
    "ControllerConcurrent",
    "writeUiReady",
    "",
    "QList<QString>&",
    "str",
    "title",
    "writeUiReadyUnion",
    "QList<int>&",
    "num",
    "writeBarReady",
    "value",
    "IntersectionConcurrent",
    "inputs",
    "UnionsConcurrent"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSControllerConcurrentENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,
       6,    2,   49,    2, 0x06,    4 /* Public */,
       9,    1,   54,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   57,    2, 0x0a,    9 /* Public */,
      13,    1,   60,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    5,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,   12,
    QMetaType::Void, 0x80000000 | 7,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ControllerConcurrent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSControllerConcurrentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSControllerConcurrentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSControllerConcurrentENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ControllerConcurrent, std::true_type>,
        // method 'writeUiReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QString> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeUiReadyUnion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'writeBarReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'IntersectionConcurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>,
        // method 'UnionsConcurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<int> &, std::false_type>
    >,
    nullptr
} };

void ControllerConcurrent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerConcurrent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeUiReady((*reinterpret_cast< std::add_pointer_t<QList<QString>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->writeUiReadyUnion((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->writeBarReady((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->IntersectionConcurrent((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        case 4: _t->UnionsConcurrent((*reinterpret_cast< std::add_pointer_t<QList<int>&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControllerConcurrent::*)(QList<QString> & , QString );
            if (_t _q_method = &ControllerConcurrent::writeUiReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControllerConcurrent::*)(QList<int> & , QString );
            if (_t _q_method = &ControllerConcurrent::writeUiReadyUnion; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControllerConcurrent::*)(int );
            if (_t _q_method = &ControllerConcurrent::writeBarReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *ControllerConcurrent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerConcurrent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSControllerConcurrentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ControllerConcurrent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ControllerConcurrent::writeUiReady(QList<QString> & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControllerConcurrent::writeUiReadyUnion(QList<int> & _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ControllerConcurrent::writeBarReady(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
