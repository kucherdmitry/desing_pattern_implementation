#ifndef SOY_H
#define SOY_H

#include "addondecorator.h"

class Soy : public AddonDecorator
{
private:
    Beverage *beverage;
public:
    Soy(Beverage *beverage);
    ~Soy() override;

    std::string getDescription() override;
    double getCost() override;
};

#endif // SOY_H
