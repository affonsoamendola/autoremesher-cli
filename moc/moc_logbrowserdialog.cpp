/****************************************************************************
** Meta object code from reading C++ file 'logbrowserdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/logbrowserdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logbrowserdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogBrowserDialog_t {
    QByteArrayData data[9];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogBrowserDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogBrowserDialog_t qt_meta_stringdata_LogBrowserDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LogBrowserDialog"
QT_MOC_LITERAL(1, 17, 13), // "outputMessage"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "QtMsgType"
QT_MOC_LITERAL(4, 42, 4), // "type"
QT_MOC_LITERAL(5, 47, 3), // "msg"
QT_MOC_LITERAL(6, 51, 6), // "source"
QT_MOC_LITERAL(7, 58, 4), // "line"
QT_MOC_LITERAL(8, 63, 4) // "save"

    },
    "LogBrowserDialog\0outputMessage\0\0"
    "QtMsgType\0type\0msg\0source\0line\0save"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogBrowserDialog[] = {

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
       1,    4,   24,    2, 0x0a /* Public */,
       8,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void,

       0        // eod
};

void LogBrowserDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogBrowserDialog *_t = static_cast<LogBrowserDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputMessage((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->save(); break;
        default: ;
        }
    }
}

const QMetaObject LogBrowserDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LogBrowserDialog.data,
      qt_meta_data_LogBrowserDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogBrowserDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogBrowserDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogBrowserDialog.stringdata0))
        return static_cast<void*>(const_cast< LogBrowserDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LogBrowserDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
