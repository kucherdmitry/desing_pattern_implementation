#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza/pizza.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza(PizzaIngredientFactory *ingredient);

    void prepare() override;
};

#endif // CHEESEPIZZA_H
