/****************************************************************************
** Meta object code from reading C++ file 'image.h'
**
** Created: Mon Jun 9 15:10:29 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "image.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'image.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Image[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      31,    6,    6,    6, 0x08,
      57,    6,    6,    6, 0x08,
      83,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Image[] = {
    "Image\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_pushButton_4_clicked()\0"
};

const QMetaObject Image::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Image,
      qt_meta_data_Image, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Image::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Image::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Image::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Image))
        return static_cast<void*>(const_cast< Image*>(this));
    return QDialog::qt_metacast(_clname);
}

int Image::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushButton_2_clicked(); break;
        case 2: on_pushButton_3_clicked(); break;
        case 3: on_pushButton_4_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
