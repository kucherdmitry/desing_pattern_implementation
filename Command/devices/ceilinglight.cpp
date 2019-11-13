#include "ceilinglight.h"

CeilingLight::CeilingLight(std::string name)
{
    this->name = name;
}

void CeilingLight::on()
{
    std::cout << this->name << " is on" << std::endl;
}

void CeilingLight::off()
{
    std::cout << this->name << " is off" << std::endl;
}

void CeilingLight::dim()
{
    std::cout << this->name << " is dim" << std::endl;
}
