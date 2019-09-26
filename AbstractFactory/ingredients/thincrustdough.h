#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H

#include "interfaces/dough.h"

class ThinCrustDough : public Dough
{
public:
    ThinCrustDough();
    ~ThinCrustDough() override;

    std::string print() override;
};

#endif // THINCRUSTDOUGH_H
