#ifndef IQUACK_H
#define IQUACK_H

#include <iostream>

using namespace std;

class IQuack
{
public:
    IQuack();
    virtual ~IQuack();

    virtual void makeSound() = 0;
};

class Quack : public IQuack
{
public:
    Quack();
    ~Quack() override;

    void makeSound() override;
};

class Squeek : public IQuack
{
public:
    Squeek();
    ~Squeek() override;

    void makeSound() override;
};

#endif // IQUACK_H
