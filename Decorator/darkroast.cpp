#include "darkroast.h"

DarkRoast::DarkRoast()
{
    std::clog << "Construct class DarkRoast " << this << "\n";
}

DarkRoast::~DarkRoast()
{
    std::clog << "Destruct class DarkRoast " << this << "\n";
}

std::string DarkRoast::getDescription()
{
    return "Dark roast coffee";
}

double DarkRoast::getCost()
{
    return 0.99;
}
