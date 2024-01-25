/****************************************************************************
** Meta object code from reading C++ file 'pbrshaderwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/pbrshaderwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pbrshaderwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PbrShaderWidget_t {
    QByteArrayData data[31];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PbrShaderWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PbrShaderWidget_t qt_meta_stringdata_PbrShaderWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PbrShaderWidget"
QT_MOC_LITERAL(1, 16, 15), // "mouseRayChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "near"
QT_MOC_LITERAL(4, 38, 3), // "far"
QT_MOC_LITERAL(5, 42, 12), // "mousePressed"
QT_MOC_LITERAL(6, 55, 9), // "globalPos"
QT_MOC_LITERAL(7, 65, 13), // "mouseReleased"
QT_MOC_LITERAL(8, 79, 14), // "addMouseRadius"
QT_MOC_LITERAL(9, 94, 6), // "radius"
QT_MOC_LITERAL(10, 101, 23), // "renderParametersChanged"
QT_MOC_LITERAL(11, 125, 16), // "xRotationChanged"
QT_MOC_LITERAL(12, 142, 5), // "angle"
QT_MOC_LITERAL(13, 148, 16), // "yRotationChanged"
QT_MOC_LITERAL(14, 165, 16), // "zRotationChanged"
QT_MOC_LITERAL(15, 182, 18), // "eyePositionChanged"
QT_MOC_LITERAL(16, 201, 11), // "eyePosition"
QT_MOC_LITERAL(17, 213, 21), // "moveToPositionChanged"
QT_MOC_LITERAL(18, 235, 14), // "moveToPosition"
QT_MOC_LITERAL(19, 250, 12), // "setXRotation"
QT_MOC_LITERAL(20, 263, 12), // "setYRotation"
QT_MOC_LITERAL(21, 276, 12), // "setZRotation"
QT_MOC_LITERAL(22, 289, 14), // "setEyePosition"
QT_MOC_LITERAL(23, 304, 7), // "cleanup"
QT_MOC_LITERAL(24, 312, 4), // "zoom"
QT_MOC_LITERAL(25, 317, 5), // "delta"
QT_MOC_LITERAL(26, 323, 38), // "setMousePickTargetPositionInM..."
QT_MOC_LITERAL(27, 362, 8), // "position"
QT_MOC_LITERAL(28, 371, 18), // "setMousePickRadius"
QT_MOC_LITERAL(29, 390, 8), // "reRender"
QT_MOC_LITERAL(30, 399, 13) // "canvasResized"

    },
    "PbrShaderWidget\0mouseRayChanged\0\0near\0"
    "far\0mousePressed\0globalPos\0mouseReleased\0"
    "addMouseRadius\0radius\0renderParametersChanged\0"
    "xRotationChanged\0angle\0yRotationChanged\0"
    "zRotationChanged\0eyePositionChanged\0"
    "eyePosition\0moveToPositionChanged\0"
    "moveToPosition\0setXRotation\0setYRotation\0"
    "setZRotation\0setEyePosition\0cleanup\0"
    "zoom\0delta\0setMousePickTargetPositionInModelSpace\0"
    "position\0setMousePickRadius\0reRender\0"
    "canvasResized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PbrShaderWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  114,    2, 0x06 /* Public */,
       5,    1,  119,    2, 0x06 /* Public */,
       7,    1,  122,    2, 0x06 /* Public */,
       8,    1,  125,    2, 0x06 /* Public */,
      10,    0,  128,    2, 0x06 /* Public */,
      11,    1,  129,    2, 0x06 /* Public */,
      13,    1,  132,    2, 0x06 /* Public */,
      14,    1,  135,    2, 0x06 /* Public */,
      15,    1,  138,    2, 0x06 /* Public */,
      17,    1,  141,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  144,    2, 0x0a /* Public */,
      20,    1,  147,    2, 0x0a /* Public */,
      21,    1,  150,    2, 0x0a /* Public */,
      22,    1,  153,    2, 0x0a /* Public */,
      23,    0,  156,    2, 0x0a /* Public */,
      24,    1,  157,    2, 0x0a /* Public */,
      26,    1,  160,    2, 0x0a /* Public */,
      28,    1,  163,    2, 0x0a /* Public */,
      29,    0,  166,    2, 0x0a /* Public */,
      30,    0,  167,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D,    3,    4,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QVector3D,   16,
    QMetaType::Void, QMetaType::QVector3D,   18,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QVector3D,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   25,
    QMetaType::Void, QMetaType::QVector3D,   27,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PbrShaderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PbrShaderWidget *_t = static_cast<PbrShaderWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseRayChanged((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 1: _t->mousePressed((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->addMouseRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->renderParametersChanged(); break;
        case 5: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->eyePositionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 9: _t->moveToPositionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 10: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setEyePosition((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 14: _t->cleanup(); break;
        case 15: _t->zoom((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setMousePickTargetPositionInModelSpace((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 17: _t->setMousePickRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->reRender(); break;
        case 19: _t->canvasResized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PbrShaderWidget::*_t)(const QVector3D & , const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::mouseRayChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::mousePressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::mouseReleased)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::addMouseRadius)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::renderParametersChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::xRotationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::yRotationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::zRotationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::eyePositionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PbrShaderWidget::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PbrShaderWidget::moveToPositionChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject PbrShaderWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_PbrShaderWidget.data,
      qt_meta_data_PbrShaderWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PbrShaderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PbrShaderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PbrShaderWidget.stringdata0))
        return static_cast<void*>(const_cast< PbrShaderWidget*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< PbrShaderWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int PbrShaderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void PbrShaderWidget::mouseRayChanged(const QVector3D & _t1, const QVector3D & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PbrShaderWidget::mousePressed(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PbrShaderWidget::mouseReleased(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PbrShaderWidget::addMouseRadius(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PbrShaderWidget::renderParametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PbrShaderWidget::xRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PbrShaderWidget::yRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PbrShaderWidget::zRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PbrShaderWidget::eyePositionChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PbrShaderWidget::moveToPositionChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
