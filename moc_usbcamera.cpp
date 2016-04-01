/****************************************************************************
** Meta object code from reading C++ file 'usbcamera.h'
**
** Created: Mon Jun 9 15:10:31 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "usbcamera.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbcamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Usbcamera[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      25,   10,   10,   10, 0x05,
      40,   10,   10,   10, 0x05,
      54,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   10,   10,   10, 0x08,
      89,   10,   10,   10, 0x08,
     111,   10,   10,   10, 0x08,
     132,   10,   10,   10, 0x08,
     141,   10,   10,   10, 0x08,
     155,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Usbcamera[] = {
    "Usbcamera\0\0quit_signal()\0close_signal()\0"
    "signal2show()\0signal2hide()\0"
    "on_btnQuit_clicked()\0on_btnVideo_clicked()\0"
    "on_btnOpen_clicked()\0showMe()\0"
    "camara_quit()\0on_pushButton_clicked()\0"
};

const QMetaObject Usbcamera::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Usbcamera,
      qt_meta_data_Usbcamera, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Usbcamera::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Usbcamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Usbcamera::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Usbcamera))
        return static_cast<void*>(const_cast< Usbcamera*>(this));
    return QWidget::qt_metacast(_clname);
}

int Usbcamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: quit_signal(); break;
        case 1: close_signal(); break;
        case 2: signal2show(); break;
        case 3: signal2hide(); break;
        case 4: on_btnQuit_clicked(); break;
        case 5: on_btnVideo_clicked(); break;
        case 6: on_btnOpen_clicked(); break;
        case 7: showMe(); break;
        case 8: camara_quit(); break;
        case 9: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Usbcamera::quit_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Usbcamera::close_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Usbcamera::signal2show()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Usbcamera::signal2hide()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
