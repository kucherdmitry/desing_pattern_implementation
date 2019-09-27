#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include "interfaces/dough.h"
#include "interfaces/cheese.h"
#include "interfaces/clams.h"
#include "interfaces/sause.h"


class PizzaIngredientFactory
{
public:
    PizzaIngredientFactory();
    virtual ~PizzaIngredientFactory() = default;

    virtual Dough* createDough() = 0;
    virtual Cheese* createCheese() = 0;
    virtual Clams* createClams() = 0;
    virtual Sause* createSause() = 0;
};

#endif // PIZZAINGREDIENTFACTORY_H
