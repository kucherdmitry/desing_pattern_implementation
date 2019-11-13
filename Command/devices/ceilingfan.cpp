#include "ceilingfan.h"

CeilingFan::CeilingFan(std::string name)
{
    this->name = name;
    std::cout << "CeilFan " << this->name << " " << this << " constructed" << std::endl;
}

CeilingFan::~CeilingFan()
{
    std::cout << "CeilFan " << this->name << " " << this << " destructed" << std::endl;
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
