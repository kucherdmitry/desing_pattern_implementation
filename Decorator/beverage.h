#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage
{
public:
    Beverage();
    virtual ~Beverage();

    virtual std::string getDescription() = 0;
    virtual double getCost() = 0;
};

#endif // BEVERAGE_H
