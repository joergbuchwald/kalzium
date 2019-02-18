/****************************************************************************
** Meta object code from reading C++ file 'elementdataviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/elementdataviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elementdataviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElementDataViewer_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElementDataViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElementDataViewer_t qt_meta_stringdata_ElementDataViewer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ElementDataViewer"
QT_MOC_LITERAL(1, 18, 8), // "slotHelp"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "rangeChanged"
QT_MOC_LITERAL(4, 41, 9), // "fullRange"
QT_MOC_LITERAL(5, 51, 10), // "slotZoomIn"
QT_MOC_LITERAL(6, 62, 11), // "slotZoomOut"
QT_MOC_LITERAL(7, 74, 8) // "drawPlot"

    },
    "ElementDataViewer\0slotHelp\0\0rangeChanged\0"
    "fullRange\0slotZoomIn\0slotZoomOut\0"
    "drawPlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElementDataViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ElementDataViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ElementDataViewer *_t = static_cast<ElementDataViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotHelp(); break;
        case 1: _t->rangeChanged(); break;
        case 2: _t->fullRange(); break;
        case 3: _t->slotZoomIn(); break;
        case 4: _t->slotZoomOut(); break;
        case 5: _t->drawPlot(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElementDataViewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ElementDataViewer.data,
      qt_meta_data_ElementDataViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ElementDataViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElementDataViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElementDataViewer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ElementDataViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
