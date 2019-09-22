#ifndef IDISPLAYELEMENT_H
#define IDISPLAYELEMENT_H

#include <iostream>

class IDisplayElement
{
public:
    IDisplayElement();
    virtual ~IDisplayElement();

    virtual void display() = 0;
};

#endif // IDISPLAYELEMENT_H
