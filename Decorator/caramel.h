#ifndef CARAMEL_H
#define CARAMEL_H

#include "addondecorator.h"

class Caramel : public AddonDecorator
{
private:
    Beverage *beverage;
public:
    Caramel(Beverage *beverage);
    ~Caramel() override;

    std::string getDescription() override;
    double getCost() override;

};

#endif // CARAMEL_H
