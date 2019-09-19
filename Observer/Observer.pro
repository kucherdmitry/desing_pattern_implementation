TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        currentconditiondisplay.cpp \
        idisplayelement.cpp \
        iobserver.cpp \
        isubject.cpp \
        main.cpp \
        weatherstation.cpp

HEADERS += \
    currentconditiondisplay.h \
    idisplayelement.h \
    iobserver.h \
    isubject.h \
    weatherstation.h
