#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include "interfaces/pizzaingredientfactory.h"
#include "interfaces/cheese.h"
#include "interfaces/dough.h"
#include "interfaces/clams.h"
#include "interfaces/sause.h"


class Pizza
{
protected:
    std::string name;
    Dough *dough;
    Sause *sauce;
    Cheese *cheese;
    Clams *clam;
    PizzaIngredientFactory *ingredientFactory;
public:
    Pizza();
    virtual ~Pizza();

    virtual void prepare() = 0;
    void bake();
    void cut();
    void box();
};

#endif // PIZZA_H
