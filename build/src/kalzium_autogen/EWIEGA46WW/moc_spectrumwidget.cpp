/****************************************************************************
** Meta object code from reading C++ file 'spectrumwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/spectrumwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spectrumwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpectrumWidget_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpectrumWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpectrumWidget_t qt_meta_stringdata_SpectrumWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SpectrumWidget"
QT_MOC_LITERAL(1, 15, 14), // "bordersChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "peakSelected"
QT_MOC_LITERAL(4, 44, 15), // "Spectrum::peak*"
QT_MOC_LITERAL(5, 60, 4), // "peak"
QT_MOC_LITERAL(6, 65, 13), // "resetSpectrum"
QT_MOC_LITERAL(7, 79, 20), // "slotActivateSpectrum"
QT_MOC_LITERAL(8, 100, 12), // "spectrumtype"
QT_MOC_LITERAL(9, 113, 10), // "slotZoomIn"
QT_MOC_LITERAL(10, 124, 11) // "slotZoomOut"

    },
    "SpectrumWidget\0bordersChanged\0\0"
    "peakSelected\0Spectrum::peak*\0peak\0"
    "resetSpectrum\0slotActivateSpectrum\0"
    "spectrumtype\0slotZoomIn\0slotZoomOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpectrumWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   52,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpectrumWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SpectrumWidget *_t = static_cast<SpectrumWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bordersChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->peakSelected((*reinterpret_cast< Spectrum::peak*(*)>(_a[1]))); break;
        case 2: _t->resetSpectrum(); break;
        case 3: _t->slotActivateSpectrum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotZoomIn(); break;
        case 5: _t->slotZoomOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpectrumWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectrumWidget::bordersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SpectrumWidget::*)(Spectrum::peak * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpectrumWidget::peakSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpectrumWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpectrumWidget.data,
      qt_meta_data_SpectrumWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SpectrumWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpectrumWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpectrumWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SpectrumWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SpectrumWidget::bordersChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SpectrumWidget::peakSelected(Spectrum::peak * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
