#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

#include "interfaces/pizzaingredientfactory.h"
#include "ingredients/thickcrustdough.h"
#include "ingredients/plumtomatosause.h"
#include "ingredients/mozzarellacheese.h"
#include "ingredients/frozenclams.h"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    ChicagoPizzaIngredientFactory();
    ~ChicagoPizzaIngredientFactory() override = default;

    Dough * createDough() override;
    Cheese * createCheese() override;
    Clams * createClams() override;
    Sause * createSause() override;
};

#endif // CHICAGOPIZZAINGREDIENTFACTORY_H
