#ifndef CLAMS_H
#define CLAMS_H

#include <iostream>

class Clams
{
public:
    Clams();
    virtual ~Clams() = default;

    virtual std::string print() = 0;
};

#endif // CLAMS_H
