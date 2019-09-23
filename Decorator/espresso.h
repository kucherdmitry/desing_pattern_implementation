#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "beverage.h"

class Espresso : public Beverage
{
public:
    Espresso();

    std::string getDescription() override;
    double getCost() override;
};

#endif // ESPRESSO_H
