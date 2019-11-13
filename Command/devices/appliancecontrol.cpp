#include "appliancecontrol.h"

ApplianceControl::ApplianceControl(std::string name)
{
    this->name = name;
    std::cout << "AppControl " << this->name << " " << this << " constructed" << std::endl;
}

ApplianceControl::~ApplianceControl()
{
    std::cout << "AppControl " << this->name << " " << this << " destructed" << std::endl;
}

void ApplianceControl::on()
{
    std::cout << this->name << " is on" << std::endl;
}

void ApplianceControl::off()
{
    std::cout << this->name << " is off" << std::endl;
}
