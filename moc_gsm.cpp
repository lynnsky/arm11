/****************************************************************************
** Meta object code from reading C++ file 'gsm.h'
**
** Created: Mon Jun 9 15:10:26 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gsm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gsm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gsm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x08,
      29,    4,    4,    4, 0x08,
      52,    4,    4,    4, 0x08,
      75,    4,    4,    4, 0x08,
      98,    4,    4,    4, 0x08,
     121,    4,    4,    4, 0x08,
     144,    4,    4,    4, 0x08,
     167,    4,    4,    4, 0x08,
     190,    4,    4,    4, 0x08,
     213,    4,    4,    4, 0x08,
     236,    4,    4,    4, 0x08,
     259,    4,    4,    4, 0x08,
     284,    4,    4,    4, 0x08,
     313,    4,    4,    4, 0x08,
     342,    4,    4,    4, 0x08,
     368,    4,    4,    4, 0x08,
     394,    4,    4,    4, 0x08,
     420,    4,    4,    4, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gsm[] = {
    "Gsm\0\0on_pushButton_clicked()\0"
    "on_pushBtn_1_clicked()\0on_pushBtn_2_clicked()\0"
    "on_pushBtn_3_clicked()\0on_pushBtn_4_clicked()\0"
    "on_pushBtn_5_clicked()\0on_pushBtn_6_clicked()\0"
    "on_pushBtn_7_clicked()\0on_pushBtn_8_clicked()\0"
    "on_pushBtn_9_clicked()\0on_pushBtn_0_clicked()\0"
    "on_pushBtn_del_clicked()\0"
    "on_pushBtn_display_clicked()\0"
    "on_pushBtn_delbind_clicked()\0"
    "on_pushBtn_bind_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_pushBtn_file_clicked()\0"
    "on_pushButton_3_clicked()\0"
};

const QMetaObject Gsm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gsm,
      qt_meta_data_Gsm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gsm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gsm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gsm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gsm))
        return static_cast<void*>(const_cast< Gsm*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gsm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_clicked(); break;
        case 1: on_pushBtn_1_clicked(); break;
        case 2: on_pushBtn_2_clicked(); break;
        case 3: on_pushBtn_3_clicked(); break;
        case 4: on_pushBtn_4_clicked(); break;
        case 5: on_pushBtn_5_clicked(); break;
        case 6: on_pushBtn_6_clicked(); break;
        case 7: on_pushBtn_7_clicked(); break;
        case 8: on_pushBtn_8_clicked(); break;
        case 9: on_pushBtn_9_clicked(); break;
        case 10: on_pushBtn_0_clicked(); break;
        case 11: on_pushBtn_del_clicked(); break;
        case 12: on_pushBtn_display_clicked(); break;
        case 13: on_pushBtn_delbind_clicked(); break;
        case 14: on_pushBtn_bind_clicked(); break;
        case 15: on_pushButton_2_clicked(); break;
        case 16: on_pushBtn_file_clicked(); break;
        case 17: on_pushButton_3_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
