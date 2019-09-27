#ifndef SAUSE_H
#define SAUSE_H

#include <iostream>

class Sause
{
public:
    Sause();
    virtual ~Sause() = default;

    virtual std::string print() = 0;
};

#endif // SAUSE_H
