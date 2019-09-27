#ifndef PLUMTOMATOSAUSE_H
#define PLUMTOMATOSAUSE_H

#include "interfaces/sause.h"

class PlumTomatoSause : public Sause
{
public:
    PlumTomatoSause();
    ~PlumTomatoSause() override = default;

    std::string print() override;
};

#endif // PLUMTOMATOSAUSE_H
