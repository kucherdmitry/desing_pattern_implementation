#ifndef PIZZASHOP_H
#define PIZZASHOP_H

#include "pizza/pizza.h"

enum PizzaType
{
    cheesePizza, clumPizza
};

class PizzaShop
{
protected:
    virtual Pizza* createPizza(PizzaType type) = 0;
public:
    PizzaShop();
    virtual ~PizzaShop();

    virtual void orderPizza(PizzaType type) = 0;
};

#endif // PIZZASHOP_H
