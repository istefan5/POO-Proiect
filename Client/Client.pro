QT      += core gui
QT      += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LoginApp
TEMPLATE = app


SOURCES += main.cpp\
        fivewindow.cpp \
        fourwindow.cpp \
        mainwindow.cpp \
        muzica.cpp \
        secondwindow.cpp \
        sport.cpp \
        teatru.cpp \
        thirdwindow.cpp

HEADERS  += mainwindow.h \
    fivewindow.h \
    fourwindow.h \
    muzica.h \
    secondwindow.h \
    sport.h \
    teatru.h \
    thirdwindow.h

FORMS    += mainwindow.ui \
    SecondWindow.ui \
    fivewindow.ui \
    fourwindow.ui \
    muzica.ui \
    sport.ui \
    teatru.ui \
    thirdwindow.ui


