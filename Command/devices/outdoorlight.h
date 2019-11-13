#ifndef OUTDOORLIGHT_H
#define OUTDOORLIGHT_H
#include <iostream>

class OutdoorLight
{
public:
    OutdoorLight(std::string name);

    void on();
    void off();

private:
    std::string name;
};

#endif // OUTDOORLIGHT_H
