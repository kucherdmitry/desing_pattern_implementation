#ifndef MOZZARELLACHEESE_H
#define MOZZARELLACHEESE_H

#include "interfaces/cheese.h"

class MozzarellaCheese : public Cheese
{
public:
    MozzarellaCheese();
    ~MozzarellaCheese() override = default;

    std::string print() override;
};

#endif // MOZZARELLACHEESE_H
