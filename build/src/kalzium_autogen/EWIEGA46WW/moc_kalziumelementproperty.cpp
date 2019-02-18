/****************************************************************************
** Meta object code from reading C++ file 'kalziumelementproperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/kalziumelementproperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kalziumelementproperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KalziumElementProperty_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KalziumElementProperty_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KalziumElementProperty_t qt_meta_stringdata_KalziumElementProperty = {
    {
QT_MOC_LITERAL(0, 0, 22), // "KalziumElementProperty"
QT_MOC_LITERAL(1, 23, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 14), // "setSliderValue"
QT_MOC_LITERAL(4, 55, 5), // "slide"
QT_MOC_LITERAL(5, 61, 9), // "setScheme"
QT_MOC_LITERAL(6, 71, 9), // "newScheme"
QT_MOC_LITERAL(7, 81, 11), // "setGradient"
QT_MOC_LITERAL(8, 93, 11) // "newGradient"

    },
    "KalziumElementProperty\0propertyChanged\0"
    "\0setSliderValue\0slide\0setScheme\0"
    "newScheme\0setGradient\0newGradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KalziumElementProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void KalziumElementProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KalziumElementProperty *_t = static_cast<KalziumElementProperty *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        case 1: _t->setSliderValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setScheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setGradient((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KalziumElementProperty::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KalziumElementProperty::propertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KalziumElementProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KalziumElementProperty.data,
      qt_meta_data_KalziumElementProperty,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *KalziumElementProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KalziumElementProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KalziumElementProperty.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KalziumElementProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KalziumElementProperty::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
