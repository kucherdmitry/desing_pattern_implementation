#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "interfaces/cheese.h"

class ReggianoCheese : public Cheese
{
public:
    ReggianoCheese();
    ~ReggianoCheese() override;

    std::string print() override;
};

#endif // REGGIANOCHEESE_H
