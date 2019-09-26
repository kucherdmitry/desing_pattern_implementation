#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "pizza/pizza.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza(PizzaIngredientFactory *ingredient);

    void prepare() override;
};

#endif // CLAMPIZZA_H
