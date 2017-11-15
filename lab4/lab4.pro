#-------------------------------------------------
#
# Project created by QtCreator 2017-11-15T16:02:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        bcm2835_stub.cpp \
    serial.cpp \
    spi.cpp

HEADERS  += mainwindow.h \
    bcm2835.h \
    serial.h \
    spi.h

FORMS    += mainwindow.ui
