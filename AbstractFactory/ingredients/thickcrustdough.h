#ifndef THICKCRUSTDOUGH_H
#define THICKCRUSTDOUGH_H

#include "interfaces/dough.h"

class ThickCrustDough : public Dough
{
public:
    ThickCrustDough();
    ~ThickCrustDough() override = default;

    std::string print() override;
};

#endif // THICKCRUSTDOUGH_H
