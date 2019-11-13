#include "ceilingfanmediumcommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(CeilingFan *ceilFan)
{
    this->ceilFan = ceilFan;
}

void CeilingFanMediumCommand::execute()
{
    this->ceilFan->medium();
    std::cout << "Ceil Fan speed: " << this->ceilFan->getSpeed() << std::endl;
}

void CeilingFanMediumCommand::unexecute()
{

}
