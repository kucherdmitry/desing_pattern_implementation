#include "light.h"

Light::Light(std::string &name)
{
    this->name = name;
}

void Light::on()
{
    std::cout << this->name << " is on" << std::endl;
}

void Light::off()
{
    std::cout << this->name << " is off" << std::endl;
}
