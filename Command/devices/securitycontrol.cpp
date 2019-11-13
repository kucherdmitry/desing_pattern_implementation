#include "securitycontrol.h"

SecurityControl::SecurityControl()
{

}

void SecurityControl::arm()
{
    std::cout << "Security armed" << std::endl;
}

void SecurityControl::disarm()
{
    std::cout << "Security disarmed" << std::endl;
}
