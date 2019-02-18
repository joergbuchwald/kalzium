/****************************************************************************
** Meta object code from reading C++ file 'kdeeduglossary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/kdeeduglossary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdeeduglossary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlossaryDialog_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlossaryDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlossaryDialog_t qt_meta_stringdata_GlossaryDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GlossaryDialog"
QT_MOC_LITERAL(1, 15, 13), // "itemActivated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 47, 11), // "displayItem"
QT_MOC_LITERAL(5, 59, 24), // "KParts::OpenUrlArguments"
QT_MOC_LITERAL(6, 84, 24) // "KParts::BrowserArguments"

    },
    "GlossaryDialog\0itemActivated\0\0"
    "QTreeWidgetItem*\0displayItem\0"
    "KParts::OpenUrlArguments\0"
    "KParts::BrowserArguments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlossaryDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       4,    3,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,

       0        // eod
};

void GlossaryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GlossaryDialog *_t = static_cast<GlossaryDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->itemActivated((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->d->displayItem((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const KParts::OpenUrlArguments(*)>(_a[2])),(*reinterpret_cast< const KParts::BrowserArguments(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlossaryDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GlossaryDialog.data,
      qt_meta_data_GlossaryDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GlossaryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlossaryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlossaryDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GlossaryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
