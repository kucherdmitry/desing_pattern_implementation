#ifndef SAUSE_H
#define SAUSE_H

#include <iostream>

class Sause
{
public:
    Sause();
    virtual ~Sause();

    virtual std::string print() = 0;
};

#endif // SAUSE_H
