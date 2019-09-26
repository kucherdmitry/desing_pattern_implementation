#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

#include "interfaces/pizzaingredientfactory.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory() override;

    Dough * createDough() override;
    Cheese * createCheese() override;
    Clams * createClams() override;
    Sause * createSause() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H
