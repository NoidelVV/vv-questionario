#-------------------------------------------------
#
# Project created by QtCreator 2015-03-03T11:08:17
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VVQuestionario
TEMPLATE = app
LIBS += -L"E:\VVQuestionario\openssl-0.9.8r-i386-win32-rev2\libeay32.dll"


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RC_FILE += res.rc
