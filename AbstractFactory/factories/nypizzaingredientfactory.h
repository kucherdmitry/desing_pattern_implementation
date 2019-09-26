#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "interfaces/pizzaingredientfactory.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory();
    ~NYPizzaIngredientFactory() override;

    Dough * createDough() override;
    Cheese * createCheese() override;
    Clams * createClams() override;
    Sause * createSause() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_H
