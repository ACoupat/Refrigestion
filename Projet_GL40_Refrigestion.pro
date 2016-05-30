#-------------------------------------------------
#
# Project created by QtCreator 2016-05-20T14:22:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Projet_GL40_Refrigestion
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ingredient.cpp \
    recette.cpp \
    fenetreajoutingredient.cpp

HEADERS  += mainwindow.h \
    ingredient.h \
    recette.h \
    fenetreajoutingredient.h

FORMS    += mainwindow.ui \
    fenetreajoutingredient.ui

DISTFILES +=

RESOURCES += \
    ressources.qrc
