#include "ceilingfanhighcommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(CeilingFan *ceilFan)
{
    this->ceilFan = ceilFan;
}

void CeilingFanHighCommand::execute()
{
    this->ceilFan->high();
    std::cout << "Ceil Fan speed: " << this->ceilFan->getSpeed() << std::endl;
}

void CeilingFanHighCommand::unexecute()
{

}
