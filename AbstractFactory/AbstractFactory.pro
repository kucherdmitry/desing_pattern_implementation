TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        factories/chicagopizzafactory.cpp \
        factories/chicagopizzaingredientfactory.cpp \
        factories/nypizzafactory.cpp \
        factories/nypizzaingredientfactory.cpp \
        ingredients/freshclams.cpp \
        ingredients/frozenclams.cpp \
        ingredients/marinarasause.cpp \
        ingredients/mozzarellacheese.cpp \
        ingredients/plumtomatosause.cpp \
        ingredients/reggianocheese.cpp \
        ingredients/thickcrustdough.cpp \
        ingredients/thincrustdough.cpp \
        interfaces/cheese.cpp \
        interfaces/clams.cpp \
        interfaces/dough.cpp \
        interfaces/pizzaingredientfactory.cpp \
        interfaces/pizzashop.cpp \
        interfaces/sause.cpp \
        main.cpp \
        pizza/cheesepizza.cpp \
        pizza/clampizza.cpp \
        pizza/pizza.cpp

HEADERS += \
    factories/chicagopizzafactory.h \
    factories/chicagopizzaingredientfactory.h \
    factories/nypizzafactory.h \
    factories/nypizzaingredientfactory.h \
    ingredients/freshclams.h \
    ingredients/frozenclams.h \
    ingredients/marinarasause.h \
    ingredients/mozzarellacheese.h \
    ingredients/plumtomatosause.h \
    ingredients/reggianocheese.h \
    ingredients/thickcrustdough.h \
    ingredients/thincrustdough.h \
    interfaces/cheese.h \
    interfaces/clams.h \
    interfaces/dough.h \
    interfaces/pizzaingredientfactory.h \
    interfaces/pizzashop.h \
    interfaces/sause.h \
    pizza/cheesepizza.h \
    pizza/clampizza.h \
    pizza/pizza.h
