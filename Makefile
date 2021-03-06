#############################################################################
# Makefile for building: sheji
# Generated by qmake (2.01a) (Qt 4.7.0) on: ?? 6? 9 15:09:50 2014
# Project:  sheji.pro
# Template: app
# Command: /opt/Qt4.7/bin/qmake -spec ../../Qt4.7/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile sheji.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-linux-gcc
CXX           = arm-linux-g++
DEFINES       = -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I../../Qt4.7/mkspecs/qws/linux-arm-g++ -I. -I../../Qt4.7/include/QtCore -I../../Qt4.7/include/QtNetwork -I../../Qt4.7/include/QtGui -I../../Qt4.7/include -I. -I.
LINK          = arm-linux-g++
LFLAGS        = -Wl,-rpath,/opt/Qt4.7/lib
LIBS          = $(SUBLIBS)  -L/opt/Qt4.7/lib -lQtGui -L/opt/Qt4.7/lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-linux-ar cqs
RANLIB        = 
QMAKE         = /opt/Qt4.7/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-linux-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainwindow.cpp \
		logindlg.cpp \
		gsm.cpp \
		mjpgstreamer.cpp \
		image.cpp \
		usbcamera.cpp \
		calendar.cpp moc_mainwindow.cpp \
		moc_logindlg.cpp \
		moc_gsm.cpp \
		moc_mjpgstreamer.cpp \
		moc_image.cpp \
		moc_usbcamera.cpp \
		moc_calendar.cpp \
		qrc_images.cpp
OBJECTS       = main.o \
		mainwindow.o \
		logindlg.o \
		gsm.o \
		mjpgstreamer.o \
		image.o \
		usbcamera.o \
		calendar.o \
		moc_mainwindow.o \
		moc_logindlg.o \
		moc_gsm.o \
		moc_mjpgstreamer.o \
		moc_image.o \
		moc_usbcamera.o \
		moc_calendar.o \
		qrc_images.o
DIST          = ../../Qt4.7/mkspecs/common/g++.conf \
		../../Qt4.7/mkspecs/common/unix.conf \
		../../Qt4.7/mkspecs/common/linux.conf \
		../../Qt4.7/mkspecs/common/qws.conf \
		../../Qt4.7/mkspecs/qconfig.pri \
		../../Qt4.7/mkspecs/modules/qt_webkit_version.pri \
		../../Qt4.7/mkspecs/features/qt_functions.prf \
		../../Qt4.7/mkspecs/features/qt_config.prf \
		../../Qt4.7/mkspecs/features/exclusive_builds.prf \
		../../Qt4.7/mkspecs/features/default_pre.prf \
		../../Qt4.7/mkspecs/features/debug.prf \
		../../Qt4.7/mkspecs/features/default_post.prf \
		../../Qt4.7/mkspecs/features/warn_on.prf \
		../../Qt4.7/mkspecs/features/qt.prf \
		../../Qt4.7/mkspecs/features/unix/thread.prf \
		../../Qt4.7/mkspecs/features/moc.prf \
		../../Qt4.7/mkspecs/features/resources.prf \
		../../Qt4.7/mkspecs/features/uic.prf \
		../../Qt4.7/mkspecs/features/yacc.prf \
		../../Qt4.7/mkspecs/features/lex.prf \
		../../Qt4.7/mkspecs/features/include_source_dir.prf \
		sheji.pro
QMAKE_TARGET  = sheji
DESTDIR       = 
TARGET        = sheji

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_logindlg.h ui_gsm.h ui_mjpgstreamer.h ui_image.h ui_usbcamera.h ui_calendar.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: sheji.pro  ../../Qt4.7/mkspecs/qws/linux-arm-g++/qmake.conf ../../Qt4.7/mkspecs/common/g++.conf \
		../../Qt4.7/mkspecs/common/unix.conf \
		../../Qt4.7/mkspecs/common/linux.conf \
		../../Qt4.7/mkspecs/common/qws.conf \
		../../Qt4.7/mkspecs/qconfig.pri \
		../../Qt4.7/mkspecs/modules/qt_webkit_version.pri \
		../../Qt4.7/mkspecs/features/qt_functions.prf \
		../../Qt4.7/mkspecs/features/qt_config.prf \
		../../Qt4.7/mkspecs/features/exclusive_builds.prf \
		../../Qt4.7/mkspecs/features/default_pre.prf \
		../../Qt4.7/mkspecs/features/debug.prf \
		../../Qt4.7/mkspecs/features/default_post.prf \
		../../Qt4.7/mkspecs/features/warn_on.prf \
		../../Qt4.7/mkspecs/features/qt.prf \
		../../Qt4.7/mkspecs/features/unix/thread.prf \
		../../Qt4.7/mkspecs/features/moc.prf \
		../../Qt4.7/mkspecs/features/resources.prf \
		../../Qt4.7/mkspecs/features/uic.prf \
		../../Qt4.7/mkspecs/features/yacc.prf \
		../../Qt4.7/mkspecs/features/lex.prf \
		../../Qt4.7/mkspecs/features/include_source_dir.prf \
		/opt/Qt4.7/lib/libQtGui.prl \
		/opt/Qt4.7/lib/libQtNetwork.prl \
		/opt/Qt4.7/lib/libQtCore.prl
	$(QMAKE) -spec ../../Qt4.7/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile sheji.pro
../../Qt4.7/mkspecs/common/g++.conf:
../../Qt4.7/mkspecs/common/unix.conf:
../../Qt4.7/mkspecs/common/linux.conf:
../../Qt4.7/mkspecs/common/qws.conf:
../../Qt4.7/mkspecs/qconfig.pri:
../../Qt4.7/mkspecs/modules/qt_webkit_version.pri:
../../Qt4.7/mkspecs/features/qt_functions.prf:
../../Qt4.7/mkspecs/features/qt_config.prf:
../../Qt4.7/mkspecs/features/exclusive_builds.prf:
../../Qt4.7/mkspecs/features/default_pre.prf:
../../Qt4.7/mkspecs/features/debug.prf:
../../Qt4.7/mkspecs/features/default_post.prf:
../../Qt4.7/mkspecs/features/warn_on.prf:
../../Qt4.7/mkspecs/features/qt.prf:
../../Qt4.7/mkspecs/features/unix/thread.prf:
../../Qt4.7/mkspecs/features/moc.prf:
../../Qt4.7/mkspecs/features/resources.prf:
../../Qt4.7/mkspecs/features/uic.prf:
../../Qt4.7/mkspecs/features/yacc.prf:
../../Qt4.7/mkspecs/features/lex.prf:
../../Qt4.7/mkspecs/features/include_source_dir.prf:
/opt/Qt4.7/lib/libQtGui.prl:
/opt/Qt4.7/lib/libQtNetwork.prl:
/opt/Qt4.7/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec ../../Qt4.7/mkspecs/qws/linux-arm-g++ CONFIG+=debug -o Makefile sheji.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/sheji1.0.0 || $(MKDIR) .tmp/sheji1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/sheji1.0.0/ && $(COPY_FILE) --parents mainwindow.h logindlg.h gsm.h mjpgstreamer.h image.h usbcamera.h calendar.h .tmp/sheji1.0.0/ && $(COPY_FILE) --parents images.qrc .tmp/sheji1.0.0/ && $(COPY_FILE) --parents main.cpp mainwindow.cpp logindlg.cpp gsm.cpp mjpgstreamer.cpp image.cpp usbcamera.cpp calendar.cpp .tmp/sheji1.0.0/ && $(COPY_FILE) --parents mainwindow.ui logindlg.ui gsm.ui mjpgstreamer.ui image.ui usbcamera.ui calendar.ui .tmp/sheji1.0.0/ && (cd `dirname .tmp/sheji1.0.0` && $(TAR) sheji1.0.0.tar sheji1.0.0 && $(COMPRESS) sheji1.0.0.tar) && $(MOVE) `dirname .tmp/sheji1.0.0`/sheji1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/sheji1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_logindlg.cpp moc_gsm.cpp moc_mjpgstreamer.cpp moc_image.cpp moc_usbcamera.cpp moc_calendar.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_logindlg.cpp moc_gsm.cpp moc_mjpgstreamer.cpp moc_image.cpp moc_usbcamera.cpp moc_calendar.cpp
moc_mainwindow.cpp: gsm.h \
		mjpgstreamer.h \
		usbcamera.h \
		image.h \
		calendar.h \
		mainwindow.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_logindlg.cpp: logindlg.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) logindlg.h -o moc_logindlg.cpp

moc_gsm.cpp: gsm.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) gsm.h -o moc_gsm.cpp

moc_mjpgstreamer.cpp: mjpgstreamer.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) mjpgstreamer.h -o moc_mjpgstreamer.cpp

moc_image.cpp: image.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) image.h -o moc_image.cpp

moc_usbcamera.cpp: usbcamera.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) usbcamera.h -o moc_usbcamera.cpp

moc_calendar.cpp: calendar.h
	/opt/Qt4.7/bin/moc $(DEFINES) $(INCPATH) calendar.h -o moc_calendar.cpp

compiler_rcc_make_all: qrc_images.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_images.cpp
qrc_images.cpp: images.qrc \
		images/监控.jpg \
		images/短信.jpg \
		images/图片.jpg \
		images/摄像头.jpg \
		images/0.jpg \
		images/江南大学.jpg
	/opt/Qt4.7/bin/rcc -name images images.qrc -o qrc_images.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_logindlg.h ui_gsm.h ui_mjpgstreamer.h ui_image.h ui_usbcamera.h ui_calendar.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_logindlg.h ui_gsm.h ui_mjpgstreamer.h ui_image.h ui_usbcamera.h ui_calendar.h
ui_mainwindow.h: mainwindow.ui
	/opt/Qt4.7/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_logindlg.h: logindlg.ui
	/opt/Qt4.7/bin/uic logindlg.ui -o ui_logindlg.h

ui_gsm.h: gsm.ui
	/opt/Qt4.7/bin/uic gsm.ui -o ui_gsm.h

ui_mjpgstreamer.h: mjpgstreamer.ui
	/opt/Qt4.7/bin/uic mjpgstreamer.ui -o ui_mjpgstreamer.h

ui_image.h: image.ui
	/opt/Qt4.7/bin/uic image.ui -o ui_image.h

ui_usbcamera.h: usbcamera.ui
	/opt/Qt4.7/bin/uic usbcamera.ui -o ui_usbcamera.h

ui_calendar.h: calendar.ui
	/opt/Qt4.7/bin/uic calendar.ui -o ui_calendar.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp mainwindow.h \
		gsm.h \
		mjpgstreamer.h \
		usbcamera.h \
		image.h \
		calendar.h \
		logindlg.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		gsm.h \
		mjpgstreamer.h \
		usbcamera.h \
		image.h \
		calendar.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

logindlg.o: logindlg.cpp logindlg.h \
		ui_logindlg.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o logindlg.o logindlg.cpp

gsm.o: gsm.cpp gsm.h \
		ui_gsm.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gsm.o gsm.cpp

mjpgstreamer.o: mjpgstreamer.cpp mjpgstreamer.h \
		ui_mjpgstreamer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mjpgstreamer.o mjpgstreamer.cpp

image.o: image.cpp image.h \
		ui_image.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o image.o image.cpp

usbcamera.o: usbcamera.cpp usbcamera.h \
		ui_usbcamera.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o usbcamera.o usbcamera.cpp

calendar.o: calendar.cpp calendar.h \
		ui_calendar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o calendar.o calendar.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_logindlg.o: moc_logindlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_logindlg.o moc_logindlg.cpp

moc_gsm.o: moc_gsm.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_gsm.o moc_gsm.cpp

moc_mjpgstreamer.o: moc_mjpgstreamer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mjpgstreamer.o moc_mjpgstreamer.cpp

moc_image.o: moc_image.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_image.o moc_image.cpp

moc_usbcamera.o: moc_usbcamera.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_usbcamera.o moc_usbcamera.cpp

moc_calendar.o: moc_calendar.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_calendar.o moc_calendar.cpp

qrc_images.o: qrc_images.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_images.o qrc_images.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

