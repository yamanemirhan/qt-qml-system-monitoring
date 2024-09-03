/****************************************************************************
** Meta object code from reading C++ file 'systeminfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../systeminfo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systeminfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
struct qt_meta_stringdata_CLASSSystemInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSystemInfoENDCLASS = QtMocHelpers::stringData(
    "SystemInfo",
    "cpuUsageChanged",
    "",
    "ramUsageChanged",
    "diskUsageChanged",
    "uptimeChanged",
    "updateSystemInfo",
    "updateCpuUsage",
    "updateRamUsage",
    "updateDiskUsage",
    "updateUptime",
    "cpuUsage",
    "ramUsage",
    "diskUsage",
    "uptime"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSystemInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   77, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    5 /* Public */,
       3,    0,   69,    2, 0x06,    6 /* Public */,
       4,    0,   70,    2, 0x06,    7 /* Public */,
       5,    0,   71,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   72,    2, 0x0a,    9 /* Public */,
       7,    0,   73,    2, 0x0a,   10 /* Public */,
       8,    0,   74,    2, 0x0a,   11 /* Public */,
       9,    0,   75,    2, 0x0a,   12 /* Public */,
      10,    0,   76,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Double, 0x00015001, uint(0), 0,
      12, QMetaType::Double, 0x00015001, uint(1), 0,
      13, QMetaType::Double, 0x00015001, uint(2), 0,
      14, QMetaType::QString, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SystemInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSystemInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSystemInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSystemInfoENDCLASS_t,
        // property 'cpuUsage'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'ramUsage'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'diskUsage'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'uptime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SystemInfo, std::true_type>,
        // method 'cpuUsageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ramUsageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'diskUsageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uptimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSystemInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCpuUsage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRamUsage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDiskUsage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUptime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SystemInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cpuUsageChanged(); break;
        case 1: _t->ramUsageChanged(); break;
        case 2: _t->diskUsageChanged(); break;
        case 3: _t->uptimeChanged(); break;
        case 4: _t->updateSystemInfo(); break;
        case 5: _t->updateCpuUsage(); break;
        case 6: _t->updateRamUsage(); break;
        case 7: _t->updateDiskUsage(); break;
        case 8: _t->updateUptime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemInfo::*)();
            if (_t _q_method = &SystemInfo::cpuUsageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemInfo::*)();
            if (_t _q_method = &SystemInfo::ramUsageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemInfo::*)();
            if (_t _q_method = &SystemInfo::diskUsageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemInfo::*)();
            if (_t _q_method = &SystemInfo::uptimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->cpuUsage(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->ramUsage(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->diskUsage(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->uptime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *SystemInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSystemInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SystemInfo::cpuUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SystemInfo::ramUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemInfo::diskUsageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemInfo::uptimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
