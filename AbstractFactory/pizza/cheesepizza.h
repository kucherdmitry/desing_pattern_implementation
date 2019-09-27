#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza/pizza.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory *ingredient);
    ~CheesePizza() override;

    void prepare() override;
};

#endif // CHEESEPIZZA_H
