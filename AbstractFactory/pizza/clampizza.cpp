#include "clampizza.h"

ClamPizza::ClamPizza(PizzaIngredientFactory *ingredient)
{
    this->ingredientFactory = ingredient;
    this->name = "Clam Pizza";
}

void ClamPizza::prepare()
{

}
