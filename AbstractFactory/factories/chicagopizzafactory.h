#ifndef CHICAGOPIZZAFACTORY_H
#define CHICAGOPIZZAFACTORY_H

#include "factories/chicagopizzaingredientfactory.h"
#include "interfaces/pizzashop.h"
#include "pizza/cheesepizza.h"
#include "pizza/clampizza.h"

class ChicagoPizzaFactory : public PizzaShop
{
private:
    PizzaIngredientFactory *ingFactory = new ChicagoPizzaIngredientFactory;
public:
    ChicagoPizzaFactory();
    ~ChicagoPizzaFactory() override;

    Pizza * createPizza(PizzaType type) override;
    void orderPizza(PizzaType type) override;
};

#endif // CHICAGOPIZZAFACTORY_H
