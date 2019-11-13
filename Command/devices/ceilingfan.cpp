#include "ceilingfan.h"

CeilingFan::CeilingFan(std::string name)
{
    this->name = name;
}

void CeilingFan::high()
{
    this->speed = HIGH;
}

void CeilingFan::medium()
{
    this->speed = MEDIUM;
}

void CeilingFan::low()
{
    this->speed = LOW;
}

void CeilingFan::off()
{
    this->speed = OFF;
}

int CeilingFan::getSpeed()
{
    return this->speed;
}
