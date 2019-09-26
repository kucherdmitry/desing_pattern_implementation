#include "cheesepizza.h"

CheesePizza::CheesePizza(PizzaIngredientFactory *ingredient)
{
    this->ingredientFactory = ingredient;
    this->name = "Great Cheese Pizza";
}

void CheesePizza::prepare()
{

}
