#include "caramel.h"

Caramel::Caramel(Beverage *beverage)
{
    this->beverage = beverage;
}

Caramel::~Caramel()
{
    delete this->beverage;
}

std::string Caramel::getDescription()
{
    return this->beverage->getDescription() + ", caramel";
}

double Caramel::getCost()
{
    return this->beverage->getCost() + 0.25;
}
