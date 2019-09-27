#ifndef NYPIZZAFACTORY_H
#define NYPIZZAFACTORY_H

#include "factories/nypizzaingredientfactory.h"
#include "interfaces/pizzashop.h"
#include "pizza/cheesepizza.h"
#include "pizza/clampizza.h"

class NYPizzaFactory : public PizzaShop
{
private:
    PizzaIngredientFactory *ingFactory = new NYPizzaIngredientFactory;
public:
    NYPizzaFactory();
    ~NYPizzaFactory() override;

    Pizza * createPizza(PizzaType type) override;
    void orderPizza(PizzaType type) override;
};

#endif // NYPIZZAFACTORY_H
