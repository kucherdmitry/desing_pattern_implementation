#include "soy.h"

Soy::Soy(Beverage *beverage)
{
    std::clog << "Construct class Soy " << this << "\n";
    this->beverage = beverage;
}

Soy::~Soy()
{
    std::clog << "Destruct class Soy " << this << "\n";
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
