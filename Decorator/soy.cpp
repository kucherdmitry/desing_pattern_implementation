#include "soy.h"

Soy::Soy(Beverage *beverage)
{
    this->beverage = beverage;
}

Soy::~Soy()
{
    delete this->beverage;
}

std::string Soy::getDescription()
{
    return this->beverage->getDescription() + ", soy";
}

double Soy::getCost()
{
    return this->beverage->getCost() + 0.1;
}
