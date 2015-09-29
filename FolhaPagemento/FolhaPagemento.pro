QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FolhaPagemento
TEMPLATE = app


SOURCES += main.cpp\
    funcionario.cpp \
    gerente.cpp \
    programador.cpp \
    estagiario.cpp \
    mainwindow.cpp

HEADERS += \
    funcionario.h \
    gerente.h \
    programador.h \
    estagiario.h \
    mainwindow.h

FORMS += mainwindow.ui
