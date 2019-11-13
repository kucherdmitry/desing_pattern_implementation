#ifndef CEILLINGLIGHT_H
#define CEILLINGLIGHT_H
#include <iostream>

class CeilingLight
{
public:
    CeilingLight(std::string name);

    void on();
    void off();
    void dim();

private:
    std::string name;
};

#endif // CEILLINGLIGHT_H
