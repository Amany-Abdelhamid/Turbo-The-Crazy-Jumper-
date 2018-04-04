#-------------------------------------------------
#
# Project created by QtCreator 2016-12-09T19:03:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Turbo
TEMPLATE = app


SOURCES += main.cpp \
    enemy.cpp \
    food.cpp \
    turbo.cpp \
    score.cpp \
    gm.cpp

HEADERS  += \
    enemy.h \
    food.h \
    turbo.h \
    score.h \
    gm.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
