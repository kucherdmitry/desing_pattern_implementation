#include "caramel.h"

Caramel::Caramel(Beverage *beverage)
{
    std::clog << "Construct class Caramel " << this << "\n";
    this->beverage = beverage;
}

Caramel::~Caramel()
{
    std::clog << "Destruct class Caramel " << this << "\n";
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
