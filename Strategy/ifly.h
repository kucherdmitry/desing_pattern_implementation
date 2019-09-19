#ifndef IFLY_H
#define IFLY_H

#include <iostream>

using namespace std;

class IFly
{
public:
    IFly();
    virtual ~IFly();

    virtual void makeFly() = 0;
};

class WingsFly : public IFly
{
public:
    WingsFly();
    ~WingsFly() override;

    void makeFly() override;
};

class NoFly : public IFly
{
public:
    NoFly();
    ~NoFly() override;

    void makeFly() override;
};

#endif // IFLY_H
