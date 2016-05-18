#-------------------------------------------------
#
# Project created by QtCreator 2016-03-09T21:34:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ppsixo
TEMPLATE = app

DESTDIR = ../bin
MOC_DIR = ../build/moc
RCC_DIR = ../build/rcc
UI_DIR = ../build/ui
unix:OBJECTS_DIR = ../build/o/unix
win32:OBJECTS_DIR = ../build/o/win32
macx:OBJECTS_DIR = ../build/o/mac

SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    question.cpp \
    test.cpp \
    dialog2.cpp \
    user.cpp \
    testinfo.cpp \
    cabinet.cpp \
    enter.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    question.h \
    test.h \
    dialog2.h \
    user.h \
    testinfo.h \
    cabinet.h \
    enter.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialog2.ui \
    cabinet.ui \
    enter.ui

RESOURCES += \
    myresources.qrc