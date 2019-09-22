#include "mocha.h"

Mocha::Mocha(Beverage *beverage)
{
    std::clog << "Construct class Mocha " << this << "\n";
    this->beverage = beverage;
}

Mocha::~Mocha()
{
    std::clog << "Destruct class Mocha " << this << "\n";
    delete this->beverage;
}

std::string Mocha::getDescription()
{
    return this->beverage->getDescription() + ", mocha";
}

double Mocha::getCost()
{
    return this->beverage->getCost() + 0.15;
}
