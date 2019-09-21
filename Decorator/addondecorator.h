#ifndef ADDONDECORATOR_H
#define ADDONDECORATOR_H

#include "beverage.h"
#include <string>

class AddonDecorator : public Beverage
{
public:
    AddonDecorator(Beverage &beverage);

    std::string getDescription() override;
    double getCost() override;

};

#endif // ADDONDECORATOR_H
