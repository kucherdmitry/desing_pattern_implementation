#include "beverage.h"

Beverage::Beverage()
{
    std::clog << "Construct class Beverage " << this << "\n";
}

Beverage::~Beverage()
{
    std::clog << "Destruct class Beverage " << this << "\n";
}
