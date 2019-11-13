#include "appliancecontrol.h"

ApplianceControl::ApplianceControl(std::string name)
{
    this->name = name;
}

void ApplianceControl::on()
{
    std::cout << this->name << " is on" << std::endl;
}

void ApplianceControl::off()
{
    std::cout << this->name << " is off" << std::endl;
}
