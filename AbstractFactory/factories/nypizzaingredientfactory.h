#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "interfaces/pizzaingredientfactory.h"
#include "ingredients/thincrustdough.h"
#include "ingredients/marinarasause.h"
#include "ingredients/reggianocheese.h"
#include "ingredients/freshclams.h"

class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    NYPizzaIngredientFactory();
    ~NYPizzaIngredientFactory() override = default;

    Dough * createDough() override;
    Cheese * createCheese() override;
    Clams * createClams() override;
    Sause * createSause() override;
};

#endif // NYPIZZAINGREDIENTFACTORY_H
