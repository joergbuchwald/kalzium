/****************************************************************************
** Meta object code from reading C++ file 'nuclearCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/calculator/nuclearCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nuclearCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nuclearCalculator_t {
    QByteArrayData data[25];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nuclearCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nuclearCalculator_t qt_meta_stringdata_nuclearCalculator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "nuclearCalculator"
QT_MOC_LITERAL(1, 18, 19), // "calculateInitAmount"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 20), // "calculateFinalAmount"
QT_MOC_LITERAL(4, 60, 13), // "calculateTime"
QT_MOC_LITERAL(5, 74, 14), // "elementChanged"
QT_MOC_LITERAL(6, 89, 5), // "index"
QT_MOC_LITERAL(7, 95, 14), // "isotopeChanged"
QT_MOC_LITERAL(8, 110, 15), // "halfLifeChanged"
QT_MOC_LITERAL(9, 126, 9), // "calculate"
QT_MOC_LITERAL(10, 136, 14), // "initAmtChanged"
QT_MOC_LITERAL(11, 151, 15), // "finalAmtChanged"
QT_MOC_LITERAL(12, 167, 11), // "timeChanged"
QT_MOC_LITERAL(13, 179, 16), // "timeUnitCombobox"
QT_MOC_LITERAL(14, 196, 10), // "QComboBox*"
QT_MOC_LITERAL(15, 207, 8), // "comboBox"
QT_MOC_LITERAL(16, 216, 16), // "massUnitCombobox"
QT_MOC_LITERAL(17, 233, 21), // "getUnitIdFromCombobox"
QT_MOC_LITERAL(18, 255, 23), // "KUnitConversion::UnitId"
QT_MOC_LITERAL(19, 279, 11), // "sliderMoved"
QT_MOC_LITERAL(20, 291, 1), // "x"
QT_MOC_LITERAL(21, 293, 7), // "setMode"
QT_MOC_LITERAL(22, 301, 4), // "mode"
QT_MOC_LITERAL(23, 306, 4), // "init"
QT_MOC_LITERAL(24, 311, 5) // "error"

    },
    "nuclearCalculator\0calculateInitAmount\0"
    "\0calculateFinalAmount\0calculateTime\0"
    "elementChanged\0index\0isotopeChanged\0"
    "halfLifeChanged\0calculate\0initAmtChanged\0"
    "finalAmtChanged\0timeChanged\0"
    "timeUnitCombobox\0QComboBox*\0comboBox\0"
    "massUnitCombobox\0getUnitIdFromCombobox\0"
    "KUnitConversion::UnitId\0sliderMoved\0"
    "x\0setMode\0mode\0init\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nuclearCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    1,  102,    2, 0x0a /* Public */,
       7,    1,  105,    2, 0x0a /* Public */,
       8,    0,  108,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    0,  110,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    1,  113,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x0a /* Public */,
      17,    1,  119,    2, 0x0a /* Public */,
      19,    1,  122,    2, 0x0a /* Public */,
      21,    1,  125,    2, 0x0a /* Public */,
      23,    0,  128,    2, 0x0a /* Public */,
      24,    1,  129,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    0x80000000 | 18, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void nuclearCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        nuclearCalculator *_t = static_cast<nuclearCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculateInitAmount(); break;
        case 1: _t->calculateFinalAmount(); break;
        case 2: _t->calculateTime(); break;
        case 3: _t->elementChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->isotopeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->halfLifeChanged(); break;
        case 6: _t->calculate(); break;
        case 7: _t->initAmtChanged(); break;
        case 8: _t->finalAmtChanged(); break;
        case 9: _t->timeChanged(); break;
        case 10: _t->timeUnitCombobox((*reinterpret_cast< QComboBox*(*)>(_a[1]))); break;
        case 11: _t->massUnitCombobox((*reinterpret_cast< QComboBox*(*)>(_a[1]))); break;
        case 12: { KUnitConversion::UnitId _r = _t->getUnitIdFromCombobox((*reinterpret_cast< QComboBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< KUnitConversion::UnitId*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->init(); break;
        case 16: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject nuclearCalculator::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_nuclearCalculator.data,
      qt_meta_data_nuclearCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *nuclearCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nuclearCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nuclearCalculator.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int nuclearCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
