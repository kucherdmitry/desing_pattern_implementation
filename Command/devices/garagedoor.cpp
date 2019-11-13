#include "garagedoor.h"

GarageDoor::GarageDoor()
{

}

void GarageDoor::up()
{
    std::cout <<"Garage door move up" << std::endl;
}

void GarageDoor::down()
{
    std::cout <<"Garage door move down" << std::endl;
}

void GarageDoor::stop()
{
    std::cout <<"Garage door stopped" << std::endl;
}

void GarageDoor::lightOn()
{
    std::cout <<"Garage light is on" << std::endl;
}

void GarageDoor::lightOff()
{
    std::cout <<"Garage light is off" << std::endl;
}
