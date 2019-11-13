#ifndef CEILINGFAN_H
#define CEILINGFAN_H
#include <iostream>

class CeilingFan
{
public:
    CeilingFan(std::string name);
    ~CeilingFan();

    void high();
    void medium();
    void low();
    void off();
    int getSpeed();

private:
    std::string name;
    int speed;
    const static int HIGH = 3;
    const static int MEDIUM = 2;
    const static int LOW = 1;
    const static int OFF = 0;
};

#endif // CEILINGFAN_H
