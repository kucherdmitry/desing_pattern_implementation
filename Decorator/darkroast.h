#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast();

    std::string getDescription() override;
    double getCost() override;

};

#endif // DARKROAST_H
