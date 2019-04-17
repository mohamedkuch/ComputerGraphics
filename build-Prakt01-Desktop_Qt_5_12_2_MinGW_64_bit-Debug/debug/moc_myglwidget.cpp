/****************************************************************************
** Meta object code from reading C++ file 'myglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Prakt01/myglwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyGLWidget_t {
    QByteArrayData data[22];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyGLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyGLWidget_t qt_meta_stringdata_MyGLWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyGLWidget"
QT_MOC_LITERAL(1, 11, 16), // "nearHaveToChange"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 15), // "farHaveToChange"
QT_MOC_LITERAL(5, 51, 10), // "FOVChanged"
QT_MOC_LITERAL(6, 62, 12), // "angleChanged"
QT_MOC_LITERAL(7, 75, 11), // "nearChanged"
QT_MOC_LITERAL(8, 87, 10), // "farChanged"
QT_MOC_LITERAL(9, 98, 6), // "setFOV"
QT_MOC_LITERAL(10, 105, 8), // "setAngle"
QT_MOC_LITERAL(11, 114, 17), // "setProjectionMode"
QT_MOC_LITERAL(12, 132, 7), // "setNear"
QT_MOC_LITERAL(13, 140, 6), // "setFar"
QT_MOC_LITERAL(14, 147, 12), // "setRotationA"
QT_MOC_LITERAL(15, 160, 12), // "setRotationB"
QT_MOC_LITERAL(16, 173, 12), // "setRotationC"
QT_MOC_LITERAL(17, 186, 11), // "correctNear"
QT_MOC_LITERAL(18, 198, 10), // "correctFar"
QT_MOC_LITERAL(19, 209, 13), // "keyPressEvent"
QT_MOC_LITERAL(20, 223, 10), // "QKeyEvent*"
QT_MOC_LITERAL(21, 234, 5) // "event"

    },
    "MyGLWidget\0nearHaveToChange\0\0value\0"
    "farHaveToChange\0FOVChanged\0angleChanged\0"
    "nearChanged\0farChanged\0setFOV\0setAngle\0"
    "setProjectionMode\0setNear\0setFar\0"
    "setRotationA\0setRotationB\0setRotationC\0"
    "correctNear\0correctFar\0keyPressEvent\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyGLWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    1,  105,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       8,    1,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  117,    2, 0x0a /* Public */,
      10,    1,  120,    2, 0x0a /* Public */,
      11,    0,  123,    2, 0x0a /* Public */,
      12,    1,  124,    2, 0x0a /* Public */,
      13,    1,  127,    2, 0x0a /* Public */,
      14,    1,  130,    2, 0x0a /* Public */,
      15,    1,  133,    2, 0x0a /* Public */,
      16,    1,  136,    2, 0x0a /* Public */,
      17,    0,  139,    2, 0x0a /* Public */,
      18,    0,  140,    2, 0x0a /* Public */,
      19,    1,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void MyGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyGLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nearHaveToChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->farHaveToChange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->FOVChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->angleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->nearChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->farChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setFOV((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setProjectionMode(); break;
        case 9: _t->setNear((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setFar((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setRotationA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setRotationB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setRotationC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->correctNear(); break;
        case 15: _t->correctFar(); break;
        case 16: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyGLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::nearHaveToChange)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyGLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::farHaveToChange)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyGLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::FOVChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyGLWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::angleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyGLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::nearChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyGLWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyGLWidget::farChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyGLWidget::staticMetaObject = { {
    &QOpenGLWidget::staticMetaObject,
    qt_meta_stringdata_MyGLWidget.data,
    qt_meta_data_MyGLWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyGLWidget.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int MyGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MyGLWidget::nearHaveToChange(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyGLWidget::farHaveToChange(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyGLWidget::FOVChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyGLWidget::angleChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyGLWidget::nearChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyGLWidget::farChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
