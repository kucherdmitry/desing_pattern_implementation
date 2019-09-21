#ifndef MILK_H
#define MILK_H

#include "addondecorator.h"
#include <string>

class Milk : public AddonDecorator
{
private:
    Beverage *beverage;
public:
    Milk(Beverage *beverage);

    std::string getDescription() override;
    double getCost() override;
};

#endif // MILK_H
