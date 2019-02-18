/****************************************************************************
** Meta object code from reading C++ file 'gradientwidget_impl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/gradientwidget_impl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gradientwidget_impl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GradientWidgetImpl_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GradientWidgetImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GradientWidgetImpl_t qt_meta_stringdata_GradientWidgetImpl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GradientWidgetImpl"
QT_MOC_LITERAL(1, 19, 20), // "gradientValueChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "slotGradientChanged"
QT_MOC_LITERAL(4, 61, 4), // "play"
QT_MOC_LITERAL(5, 66, 4), // "stop"
QT_MOC_LITERAL(6, 71, 4), // "tick"
QT_MOC_LITERAL(7, 76, 14), // "doubleToSlider"
QT_MOC_LITERAL(8, 91, 3), // "var"
QT_MOC_LITERAL(9, 95, 12), // "intToSpinbox"
QT_MOC_LITERAL(10, 108, 11), // "setNewValue"
QT_MOC_LITERAL(11, 120, 8) // "newValue"

    },
    "GradientWidgetImpl\0gradientValueChanged\0"
    "\0slotGradientChanged\0play\0stop\0tick\0"
    "doubleToSlider\0var\0intToSpinbox\0"
    "setNewValue\0newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GradientWidgetImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    0,   59,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void GradientWidgetImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GradientWidgetImpl *_t = static_cast<GradientWidgetImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gradientValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->slotGradientChanged(); break;
        case 2: _t->play(); break;
        case 3: _t->stop(); break;
        case 4: _t->tick(); break;
        case 5: _t->doubleToSlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->intToSpinbox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNewValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GradientWidgetImpl::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GradientWidgetImpl::gradientValueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GradientWidgetImpl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GradientWidgetImpl.data,
      qt_meta_data_GradientWidgetImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GradientWidgetImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GradientWidgetImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GradientWidgetImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui_gradientWidget"))
        return static_cast< Ui_gradientWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int GradientWidgetImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GradientWidgetImpl::gradientValueChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
