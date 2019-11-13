#include "faucetcontrol.h"

FaucetControl::FaucetControl(std::string name)
{
    this->name = name;
}

void FaucetControl::openValue()
{
    std::cout << this->name << " is on" << std::endl;
}

void FaucetControl::closeValue()
{
    std::cout << this->name << " is off" << std::endl;
}
