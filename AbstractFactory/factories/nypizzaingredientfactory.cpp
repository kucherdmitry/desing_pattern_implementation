#include "nypizzaingredientfactory.h"

NYPizzaIngredientFactory::NYPizzaIngredientFactory()
{
}

Dough *NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough;
}

Cheese *NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese;
}

Clams *NYPizzaIngredientFactory::createClams()
{
    return new FreshClams;
}

Sause *NYPizzaIngredientFactory::createSause()
{
    return new MarinaraSause;
}
