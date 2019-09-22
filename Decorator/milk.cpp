#include "milk.h"

Milk::Milk(Beverage *beverage)
{
    std::clog << "Construct class Milk " << this << "\n";
    this->beverage = beverage;
}

Milk::~Milk()
{
    std::clog << "Destruct class Milk " << this << "\n";
    delete this->beverage;
}

std::string Milk::getDescription()
{
    return this->beverage->getDescription() + ", milk";
}

double Milk::getCost()
{
    return this->beverage->getCost() + 0.1;
}
