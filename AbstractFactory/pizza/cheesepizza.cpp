#include "cheesepizza.h"

CheesePizza::CheesePizza(PizzaIngredientFactory *ingredient)
{
    this->ingredientFactory = ingredient;
    this->name = "Great Cheese Pizza";
}

void CheesePizza::prepare()
{
    std::cout << "Prepare: " + this->name << std::endl;
    this->clam = ingredientFactory->createClams();
    this->cheese = ingredientFactory->createCheese();
    this->sauce = ingredientFactory->createSause();
    this->dough = ingredientFactory->createDough();
}
