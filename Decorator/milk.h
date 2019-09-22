#ifndef MILK_H
#define MILK_H

#include "addondecorator.h"

class Milk : public AddonDecorator
{
private:
    Beverage *beverage;
public:
    Milk(Beverage *beverage);
    ~Milk() override;

    std::string getDescription() override;
    double getCost() override;
};

#endif // MILK_H
