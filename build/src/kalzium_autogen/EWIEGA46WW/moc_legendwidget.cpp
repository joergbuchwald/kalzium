/****************************************************************************
** Meta object code from reading C++ file 'legendwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/legendwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'legendwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LegendWidget_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LegendWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LegendWidget_t qt_meta_stringdata_LegendWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LegendWidget"
QT_MOC_LITERAL(1, 13, 14), // "elementMatched"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "element"
QT_MOC_LITERAL(4, 37, 17), // "resetElementMatch"
QT_MOC_LITERAL(5, 55, 13), // "updateContent"
QT_MOC_LITERAL(6, 69, 11), // "setDockArea"
QT_MOC_LITERAL(7, 81, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(8, 100, 11), // "newDockArea"
QT_MOC_LITERAL(9, 112, 16), // "legendItemAction"
QT_MOC_LITERAL(10, 129, 5) // "color"

    },
    "LegendWidget\0elementMatched\0\0element\0"
    "resetElementMatch\0updateContent\0"
    "setDockArea\0Qt::DockWidgetArea\0"
    "newDockArea\0legendItemAction\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LegendWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QColor,   10,

       0        // eod
};

void LegendWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LegendWidget *_t = static_cast<LegendWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementMatched((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->resetElementMatch(); break;
        case 2: _t->updateContent(); break;
        case 3: _t->setDockArea((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 4: _t->legendItemAction((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LegendWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LegendWidget::elementMatched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LegendWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LegendWidget::resetElementMatch)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LegendWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LegendWidget.data,
      qt_meta_data_LegendWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LegendWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegendWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LegendWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LegendWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LegendWidget::elementMatched(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LegendWidget::resetElementMatch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_LegendItem_t {
    QByteArrayData data[4];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LegendItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LegendItem_t qt_meta_stringdata_LegendItem = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LegendItem"
QT_MOC_LITERAL(1, 11, 17), // "legenItemHoovered"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5) // "color"

    },
    "LegendItem\0legenItemHoovered\0\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LegendItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void LegendItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LegendItem *_t = static_cast<LegendItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->legenItemHoovered((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LegendItem::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LegendItem::legenItemHoovered)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LegendItem::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_LegendItem.data,
      qt_meta_data_LegendItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LegendItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegendItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LegendItem.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int LegendItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void LegendItem::legenItemHoovered(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
