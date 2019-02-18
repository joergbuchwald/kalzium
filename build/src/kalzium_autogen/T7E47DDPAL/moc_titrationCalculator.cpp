/****************************************************************************
** Meta object code from reading C++ file 'titrationCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/calculator/titrationCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titrationCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_titrationCalculator_t {
    QByteArrayData data[13];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_titrationCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_titrationCalculator_t qt_meta_stringdata_titrationCalculator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "titrationCalculator"
QT_MOC_LITERAL(1, 20, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "on_xmin_valueChanged"
QT_MOC_LITERAL(4, 64, 3), // "val"
QT_MOC_LITERAL(5, 68, 20), // "on_xmax_valueChanged"
QT_MOC_LITERAL(6, 89, 20), // "on_ymin_valueChanged"
QT_MOC_LITERAL(7, 110, 20), // "on_ymax_valueChanged"
QT_MOC_LITERAL(8, 131, 29), // "on_actionSave_image_triggered"
QT_MOC_LITERAL(9, 161, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(10, 185, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(11, 209, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(12, 232, 29) // "on_actionRapid_Help_triggered"

    },
    "titrationCalculator\0on_pushButton_clicked\0"
    "\0on_xmin_valueChanged\0val\0"
    "on_xmax_valueChanged\0on_ymin_valueChanged\0"
    "on_ymax_valueChanged\0on_actionSave_image_triggered\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionNew_triggered\0"
    "on_actionRapid_Help_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_titrationCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    1,   65,    2, 0x0a /* Public */,
       5,    1,   68,    2, 0x0a /* Public */,
       6,    1,   71,    2, 0x0a /* Public */,
       7,    1,   74,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void titrationCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        titrationCalculator *_t = static_cast<titrationCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_xmin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_xmax_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_ymin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_ymax_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_actionSave_image_triggered(); break;
        case 6: _t->on_actionOpen_triggered(); break;
        case 7: _t->on_actionSave_triggered(); break;
        case 8: _t->on_actionNew_triggered(); break;
        case 9: _t->on_actionRapid_Help_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject titrationCalculator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_titrationCalculator.data,
      qt_meta_data_titrationCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *titrationCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *titrationCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_titrationCalculator.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int titrationCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
