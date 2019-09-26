#ifndef CLAMS_H
#define CLAMS_H

#include <iostream>

class Clams
{
public:
    virtual ~Clams();

    virtual std::string print() = 0;
};

#endif // CLAMS_H
