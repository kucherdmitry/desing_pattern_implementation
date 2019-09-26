#include "clampizza.h"

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredient)
{
    this->ingredientFactory = ingredient;
    this->name = "Clam Pizza";
}

void ClamPizza::prepare()
{
    std::cout << "Prepare: " + this->name << std::endl;
    this->clam = ingredientFactory->createClams();
    this->cheese = ingredientFactory->createCheese();
    this->sauce = ingredientFactory->createSause();
    this->dough = ingredientFactory->createDough();
}
