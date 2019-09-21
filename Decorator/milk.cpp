#include "milk.h"

Milk::Milk(Beverage *beverage)
{
    this->beverage = beverage;
}

std::string Milk::getDescription()
{
    return this->beverage->getDescription() + ", milk";
}

double Milk::getCost()
{
    return this->beverage->getCost() + 0.1;
}
