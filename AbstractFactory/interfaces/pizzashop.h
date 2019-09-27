#ifndef PIZZASHOP_H
#define PIZZASHOP_H

#include "pizza/pizza.h"

enum PizzaType
{
    cheesePizza, clamPizza
};

class PizzaShop
{
protected:
    Pizza *pizza;
    virtual Pizza* createPizza(PizzaType type) = 0;
public:
    PizzaShop();
    virtual ~PizzaShop() = default;

    virtual void orderPizza(PizzaType type) = 0;
};

#endif // PIZZASHOP_H
