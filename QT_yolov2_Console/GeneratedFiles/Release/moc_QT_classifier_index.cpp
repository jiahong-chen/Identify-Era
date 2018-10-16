/****************************************************************************
** Meta object code from reading C++ file 'QT_classifier_index.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QT_classifier_index.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QT_classifier_index.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QT_classifier_index_t {
    QByteArrayData data[6];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QT_classifier_index_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QT_classifier_index_t qt_meta_stringdata_QT_classifier_index = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QT_classifier_index"
QT_MOC_LITERAL(1, 20, 7), // "go_back"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "show_classification"
QT_MOC_LITERAL(4, 49, 18), // "send_return_signal"
QT_MOC_LITERAL(5, 68, 21) // "classifier_index_show"

    },
    "QT_classifier_index\0go_back\0\0"
    "show_classification\0send_return_signal\0"
    "classifier_index_show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QT_classifier_index[] = {

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
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QT_classifier_index::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QT_classifier_index *_t = static_cast<QT_classifier_index *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->go_back(); break;
        case 1: _t->show_classification(); break;
        case 2: _t->send_return_signal(); break;
        case 3: _t->classifier_index_show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QT_classifier_index::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QT_classifier_index::go_back)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QT_classifier_index::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QT_classifier_index.data,
      qt_meta_data_QT_classifier_index,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QT_classifier_index::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QT_classifier_index::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QT_classifier_index.stringdata0))
        return static_cast<void*>(const_cast< QT_classifier_index*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QT_classifier_index::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void QT_classifier_index::go_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
