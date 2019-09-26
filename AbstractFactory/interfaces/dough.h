#ifndef DOUGH_H
#define DOUGH_H

#include <iostream>

class Dough
{
public:
    Dough();
    virtual ~Dough();

    virtual std::string print() = 0;
};

#endif // DOUGH_H
