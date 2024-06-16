/****************************************************************************
** Meta object code from reading C++ file 'cframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../labSemana9_RebecaPaz_22241028_AnaReyes_22251016_DanielDavid/cframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cFrame_t {
    QByteArrayData data[10];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cFrame_t qt_meta_stringdata_cFrame = {
    {
QT_MOC_LITERAL(0, 0, 6), // "cFrame"
QT_MOC_LITERAL(1, 7, 22), // "on_btn_generar_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "generarListaPredefinida"
QT_MOC_LITERAL(4, 55, 23), // "limpiarListaPolimorfica"
QT_MOC_LITERAL(5, 79, 23), // "on_btn_ingresar_clicked"
QT_MOC_LITERAL(6, 103, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(7, 126, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(8, 151, 22), // "on_btn_guardar_clicked"
QT_MOC_LITERAL(9, 174, 8) // "exportar"

    },
    "cFrame\0on_btn_generar_clicked\0\0"
    "generarListaPredefinida\0limpiarListaPolimorfica\0"
    "on_btn_ingresar_clicked\0on_radioButton_clicked\0"
    "on_radioButton_2_clicked\0"
    "on_btn_guardar_clicked\0exportar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_generar_clicked(); break;
        case 1: _t->generarListaPredefinida(); break;
        case 2: _t->limpiarListaPolimorfica(); break;
        case 3: _t->on_btn_ingresar_clicked(); break;
        case 4: _t->on_radioButton_clicked(); break;
        case 5: _t->on_radioButton_2_clicked(); break;
        case 6: _t->on_btn_guardar_clicked(); break;
        case 7: _t->exportar(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cFrame::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_cFrame.data,
    qt_meta_data_cFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cFrame.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
