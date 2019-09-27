#include "chicagopizzafactory.h"

ChicagoPizzaFactory::ChicagoPizzaFactory()
{
}

ChicagoPizzaFactory::~ChicagoPizzaFactory()
{
    delete ingFactory;
    delete pizza;
}

Pizza *ChicagoPizzaFactory::createPizza(PizzaType type)
{
    if (type == cheesePizza)
    {
        return new CheesePizza(ingFactory);
    }
    else if (type == clamPizza)
    {
        return new ClamPizza(ingFactory);
    }
    else
    {
        return nullptr;
    }
}

void ChicagoPizzaFactory::orderPizza(PizzaType type)
{
    this->pizza = createPizza(type);
    this->pizza->prepare();
    this->pizza->bake();
    this->pizza->cut();
    this->pizza->box();
}
