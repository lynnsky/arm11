#-------------------------------------------------
#
# Project created by QtCreator 2014-05-09T13:32:28
#
#-------------------------------------------------

QT       += core gui

TARGET = sheji
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindlg.cpp \
    gsm.cpp \
    mjpgstreamer.cpp \
    image.cpp \
    usbcamera.cpp \
    calendar.cpp

HEADERS  += mainwindow.h \
    logindlg.h \
    gsm.h \
    mjpgstreamer.h \
    image.h \
    usbcamera.h \
    calendar.h

FORMS    += mainwindow.ui \
    logindlg.ui \
    gsm.ui \
    mjpgstreamer.ui \
    image.ui \
    usbcamera.ui \
    calendar.ui

RESOURCES += \
    images.qrc
