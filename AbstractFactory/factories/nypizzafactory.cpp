#include "nypizzafactory.h"

NYPizzaFactory::NYPizzaFactory()
{
}

NYPizzaFactory::~NYPizzaFactory()
{
    delete ingFactory;
    delete pizza;
}

Pizza *NYPizzaFactory::createPizza(PizzaType type)
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

void NYPizzaFactory::orderPizza(PizzaType type)
{
    this->pizza = createPizza(type);
    this->pizza->prepare();
    this->pizza->bake();
    this->pizza->cut();
    this->pizza->box();
}
