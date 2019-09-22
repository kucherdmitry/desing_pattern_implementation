#include "espresso.h"

Espresso::Espresso()
{
    std::clog << "Construct class Espresso " << this << "\n";
}

Espresso::~Espresso()
{
    std::clog << "Destruct class Espresso " << this << "\n";
}

std::string Espresso::getDescription()
{
    return "Espresso";
}

double Espresso::getCost()
{
    return 0.90;
}
