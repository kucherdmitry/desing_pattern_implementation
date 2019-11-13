#include "ceilingfanlowcommand.h"

CeilingFanLowCommand::CeilingFanLowCommand(CeilingFan *ceilFan)
{
    this->ceilFan = ceilFan;
}

void CeilingFanLowCommand::execute()
{
    this->ceilFan->low();
    std::cout << "Ceil Fan speed: " << this->ceilFan->getSpeed() << std::endl;
}

void CeilingFanLowCommand::unexecute()
{

}
