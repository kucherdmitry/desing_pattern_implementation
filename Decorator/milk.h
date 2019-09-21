#ifndef MILK_H
#define MILK_H

#include "addondecorator.h"
#include <string>

class Milk : public AddonDecorator
{
public:
    Milk();

    std::string getDescription() override;
    double getCost() override;
};

#endif // MILK_H
