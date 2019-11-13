#include "outdoorlight.h"

OutdoorLight::OutdoorLight(std::string name)
{
    this->name = name;
}

void OutdoorLight::on()
{
    std::cout << this->name << " is on" << std::endl;
}

void OutdoorLight::off()
{
    std::cout << this->name << " is off" << std::endl;
}
