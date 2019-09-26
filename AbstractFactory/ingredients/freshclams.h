#ifndef FRESHCLAMS_H
#define FRESHCLAMS_H

#include "interfaces/clams.h"

class FreshClams : public Clams
{
public:
    FreshClams();
    ~FreshClams() override;

    std::string print() override;
};

#endif // FRESHCLAMS_H
