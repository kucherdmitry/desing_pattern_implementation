#include "chicagopizzaingredientfactory.h"

ChicagoPizzaIngredientFactory::ChicagoPizzaIngredientFactory()
{
}

Dough *ChicagoPizzaIngredientFactory::createDough()
{
    return new ThickCrustDough;
}

Cheese *ChicagoPizzaIngredientFactory::createCheese()
{
    return new MozzarellaCheese;
}

Clams *ChicagoPizzaIngredientFactory::createClams()
{
    return new FrozenClams;
}

Sause *ChicagoPizzaIngredientFactory::createSause()
{
    return new PlumTomatoSause;
}
