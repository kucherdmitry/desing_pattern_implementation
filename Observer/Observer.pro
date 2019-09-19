TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        currentconditiondisplay.cpp \
        forecastdisplay.cpp \
        idisplayelement.cpp \
        iobserver.cpp \
        isubject.cpp \
        main.cpp \
        statisticsdisplay.cpp \
        weatherstation.cpp

HEADERS += \
    currentconditiondisplay.h \
    forecastdisplay.h \
    idisplayelement.h \
    iobserver.h \
    isubject.h \
    statisticsdisplay.h \
    weatherstation.h
