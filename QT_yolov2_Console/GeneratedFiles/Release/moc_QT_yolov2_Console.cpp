/****************************************************************************
** Meta object code from reading C++ file 'QT_yolov2_Console.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QT_yolov2_Console.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QT_yolov2_Console.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QT_yolov2_Console_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QT_yolov2_Console_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QT_yolov2_Console_t qt_meta_stringdata_QT_yolov2_Console = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QT_yolov2_Console"
QT_MOC_LITERAL(1, 18, 7), // "go_back"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "file_ck"
QT_MOC_LITERAL(4, 35, 10), // "cfgfile_ck"
QT_MOC_LITERAL(5, 46, 5), // "start"
QT_MOC_LITERAL(6, 52, 11), // "progressbar"
QT_MOC_LITERAL(7, 64, 16), // "QProgressDialog*"
QT_MOC_LITERAL(8, 81, 18) // "send_return_signal"

    },
    "QT_yolov2_Console\0go_back\0\0file_ck\0"
    "cfgfile_ck\0start\0progressbar\0"
    "QProgressDialog*\0send_return_signal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QT_yolov2_Console[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

       0        // eod
};

void QT_yolov2_Console::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QT_yolov2_Console *_t = static_cast<QT_yolov2_Console *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->go_back(); break;
        case 1: _t->file_ck(); break;
        case 2: _t->cfgfile_ck(); break;
        case 3: _t->start(); break;
        case 4: _t->progressbar((*reinterpret_cast< QProgressDialog*(*)>(_a[1]))); break;
        case 5: _t->send_return_signal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProgressDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QT_yolov2_Console::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QT_yolov2_Console::go_back)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QT_yolov2_Console::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QT_yolov2_Console.data,
      qt_meta_data_QT_yolov2_Console,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QT_yolov2_Console::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QT_yolov2_Console::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QT_yolov2_Console.stringdata0))
        return static_cast<void*>(const_cast< QT_yolov2_Console*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QT_yolov2_Console::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QT_yolov2_Console::go_back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
