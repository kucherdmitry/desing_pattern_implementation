#include "decaf.h"

Decaf::Decaf()
{
    std::clog << "Construct class Decaf " << this << "\n";
}

Decaf::~Decaf()
{
    std::clog << "Destruct class Decaf " << this << "\n";
}

std::string Decaf::getDescription()
{
    return "Decaf coffee";
}

double Decaf::getCost()
{
    return 1.10;
}
