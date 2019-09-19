#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "ifly.h"
#include "iquack.h"

using namespace std;

class Duck
{
public:
    Duck();
    virtual ~Duck();

    virtual void display() = 0;
    void makeFly();
    void makeSound();

    IFly *flyInterface;
    IQuack *quackInterface;
};

class WildDuck : public Duck
{
public:
    WildDuck(IFly *fb, IQuack *qb);
    ~WildDuck() override;

    void display() override;
};

class CityDuck : public Duck
{
public:
    CityDuck(IFly *fb, IQuack *qb);
    ~CityDuck() override;

    void display() override;
};

class FakeDuck : public Duck
{
public:
    FakeDuck(IFly *fb, IQuack *qb);
    ~FakeDuck() override;

    void display() override;
};



#endif // DUCK_H
