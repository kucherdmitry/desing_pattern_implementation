#include "mocha.h"

Mocha::Mocha(Beverage *beverage)
{
    this->beverage = beverage;
}

Mocha::~Mocha()
{
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
