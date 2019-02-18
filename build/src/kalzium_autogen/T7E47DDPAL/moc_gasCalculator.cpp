/****************************************************************************
** Meta object code from reading C++ file 'gasCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/calculator/gasCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gasCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gasCalculator_t {
    QByteArrayData data[21];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gasCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gasCalculator_t qt_meta_stringdata_gasCalculator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gasCalculator"
QT_MOC_LITERAL(1, 14, 17), // "calculatePressure"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "calculateVol"
QT_MOC_LITERAL(4, 46, 13), // "calculateTemp"
QT_MOC_LITERAL(5, 60, 14), // "calculateMoles"
QT_MOC_LITERAL(6, 75, 13), // "calculateMass"
QT_MOC_LITERAL(7, 89, 18), // "calculateMolarMass"
QT_MOC_LITERAL(8, 108, 10), // "volChanged"
QT_MOC_LITERAL(9, 119, 11), // "tempChanged"
QT_MOC_LITERAL(10, 131, 15), // "pressureChanged"
QT_MOC_LITERAL(11, 147, 11), // "massChanged"
QT_MOC_LITERAL(12, 159, 12), // "molesChanged"
QT_MOC_LITERAL(13, 172, 5), // "value"
QT_MOC_LITERAL(14, 178, 16), // "molarMassChanged"
QT_MOC_LITERAL(15, 195, 13), // "Vand_aChanged"
QT_MOC_LITERAL(16, 209, 13), // "Vand_bChanged"
QT_MOC_LITERAL(17, 223, 9), // "calculate"
QT_MOC_LITERAL(18, 233, 5), // "error"
QT_MOC_LITERAL(19, 239, 7), // "setMode"
QT_MOC_LITERAL(20, 247, 4) // "init"

    },
    "gasCalculator\0calculatePressure\0\0"
    "calculateVol\0calculateTemp\0calculateMoles\0"
    "calculateMass\0calculateMolarMass\0"
    "volChanged\0tempChanged\0pressureChanged\0"
    "massChanged\0molesChanged\0value\0"
    "molarMassChanged\0Vand_aChanged\0"
    "Vand_bChanged\0calculate\0error\0setMode\0"
    "init"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gasCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x0a /* Public */,
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x0a /* Public */,
       6,    0,  108,    2, 0x0a /* Public */,
       7,    0,  109,    2, 0x0a /* Public */,
       8,    0,  110,    2, 0x0a /* Public */,
       9,    0,  111,    2, 0x0a /* Public */,
      10,    0,  112,    2, 0x0a /* Public */,
      11,    0,  113,    2, 0x0a /* Public */,
      12,    1,  114,    2, 0x0a /* Public */,
      14,    1,  117,    2, 0x0a /* Public */,
      15,    0,  120,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    1,  123,    2, 0x0a /* Public */,
      19,    1,  126,    2, 0x0a /* Public */,
      20,    0,  129,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void gasCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gasCalculator *_t = static_cast<gasCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculatePressure(); break;
        case 1: _t->calculateVol(); break;
        case 2: _t->calculateTemp(); break;
        case 3: _t->calculateMoles(); break;
        case 4: _t->calculateMass(); break;
        case 5: _t->calculateMolarMass(); break;
        case 6: _t->volChanged(); break;
        case 7: _t->tempChanged(); break;
        case 8: _t->pressureChanged(); break;
        case 9: _t->massChanged(); break;
        case 10: _t->molesChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->molarMassChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->Vand_aChanged(); break;
        case 13: _t->Vand_bChanged(); break;
        case 14: _t->calculate(); break;
        case 15: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->init(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gasCalculator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gasCalculator.data,
      qt_meta_data_gasCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gasCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gasCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gasCalculator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int gasCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
