#-------------------------------------------------
#
# Project created by QtCreator 2017-10-18T16:14:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bcm2835_stub.cpp \
    pin.cpp

HEADERS  += mainwindow.h \
    bcm2835.h \
    pin.h

FORMS    += mainwindow.ui
