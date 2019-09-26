#ifndef FROZENCLAMS_H
#define FROZENCLAMS_H

#include "interfaces/clams.h"

class FrozenClams : public Clams
{
public:
    FrozenClams();
    ~FrozenClams() override;

    std::string print() override;
};

#endif // FROZENCLAMS_H
