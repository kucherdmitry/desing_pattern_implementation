#ifndef MARINARASAUSE_H
#define MARINARASAUSE_H

#include "interfaces/sause.h"

class MarinaraSause : public Sause
{
public:
    MarinaraSause();
    ~MarinaraSause() override = default;

    std::string print() override;
};

#endif // MARINARASAUSE_H
