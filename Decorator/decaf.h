#ifndef DECAF_H
#define DECAF_H

#include "beverage.h"

class Decaf : public Beverage
{
public:
    Decaf();

    std::string getDescription() override;
    double getCost() override;
};

#endif // DECAF_H
