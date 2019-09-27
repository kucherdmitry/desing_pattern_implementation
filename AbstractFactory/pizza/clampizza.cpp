#include "clampizza.h"

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredient)
{
    this->ingredientFactory = ingredient;
    this->name = "Clam Pizza";
}

ClamPizza::~ClamPizza()
{
    delete this->clam;
    delete this->dough;
    delete this->sauce;
    delete this->cheese;
}

void ClamPizza::prepare()
{
    std::cout << "Prepare: " + this->name << std::endl;
    this->clam = ingredientFactory->createClams();
    this->cheese = ingredientFactory->createCheese();
    this->sauce = ingredientFactory->createSause();
    this->dough = ingredientFactory->createDough();

    std::cout << "Adding dough: " + this->dough->print() << std::endl;
    std::cout << "Adding sauce: " + this->sauce->print() << std::endl;
    std::cout << "Adding clam: " + this->clam->print() << std::endl;
    std::cout << "Adding cheese: " + this->cheese->print() << std::endl;
}
