#ifndef ADDONDECORATOR_H
#define ADDONDECORATOR_H

#include "beverage.h"

class AddonDecorator : public Beverage
{
public:
    AddonDecorator();

    std::string getDescription() override = 0;
    double getCost() override = 0;

};

#endif // ADDONDECORATOR_H
