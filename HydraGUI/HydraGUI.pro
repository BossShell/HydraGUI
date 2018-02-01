#-------------------------------------------------
#
# Project created by QtCreator 2018-01-31T20:47:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HydraGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    customgraphicsitem.cpp \
    customgraphicsscene.cpp \
    customrectitem.cpp

HEADERS  += mainwindow.h \
    customgraphicsitem.h \
    customgraphicsscene.h \
    customrectitem.h

FORMS    += mainwindow.ui
