/****************************************************************************
** Meta object code from reading C++ file 'isotopeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/isotopetable/isotopeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'isotopeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IsotopeView_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IsotopeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IsotopeView_t qt_meta_stringdata_IsotopeView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "IsotopeView"
QT_MOC_LITERAL(1, 12, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "zoomLevel"
QT_MOC_LITERAL(4, 40, 23), // "visibleSceneRectChanged"
QT_MOC_LITERAL(5, 64, 9) // "sceneRect"

    },
    "IsotopeView\0zoomLevelChanged\0\0zoomLevel\0"
    "visibleSceneRectChanged\0sceneRect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IsotopeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::QPolygonF,    5,

       0        // eod
};

void IsotopeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IsotopeView *_t = static_cast<IsotopeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->visibleSceneRectChanged((*reinterpret_cast< const QPolygonF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IsotopeView::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IsotopeView::zoomLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IsotopeView::*)(const QPolygonF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IsotopeView::visibleSceneRectChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IsotopeView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_IsotopeView.data,
      qt_meta_data_IsotopeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *IsotopeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IsotopeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IsotopeView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int IsotopeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void IsotopeView::zoomLevelChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IsotopeView::visibleSceneRectChanged(const QPolygonF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
