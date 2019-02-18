/****************************************************************************
** Meta object code from reading C++ file 'search.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/search.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Search_t {
    QByteArrayData data[9];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Search_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Search_t qt_meta_stringdata_Search = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Search"
QT_MOC_LITERAL(1, 7, 13), // "searchChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "searchReset"
QT_MOC_LITERAL(4, 34, 8), // "doSearch"
QT_MOC_LITERAL(5, 43, 4), // "text"
QT_MOC_LITERAL(6, 48, 10), // "SearchKind"
QT_MOC_LITERAL(7, 59, 4), // "kind"
QT_MOC_LITERAL(8, 64, 11) // "resetSearch"

    },
    "Search\0searchChanged\0\0searchReset\0"
    "doSearch\0text\0SearchKind\0kind\0resetSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Search[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void,

       0        // eod
};

void Search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Search *_t = static_cast<Search *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchChanged(); break;
        case 1: _t->searchReset(); break;
        case 2: _t->doSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< SearchKind(*)>(_a[2]))); break;
        case 3: _t->resetSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Search::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Search::searchChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Search::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Search::searchReset)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Search::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Search.data,
      qt_meta_data_Search,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Search::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Search.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Search::searchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Search::searchReset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
