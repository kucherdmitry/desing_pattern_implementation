#include "tv.h"

TV::TV(std::string name)
{
    this->name = name;
}

void TV::on()
{
    std::cout << "TV is on" << std::endl;
}

void TV::off()
{
    std::cout << "TV is off" << std::endl;
}

void TV::setInputChannel()
{

}

void TV::setVolume()
{

}
