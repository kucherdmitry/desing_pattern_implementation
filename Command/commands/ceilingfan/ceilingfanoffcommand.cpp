#include "ceilingfanoffcommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(CeilingFan *ceilFan)
{
    this->ceilFan = ceilFan;
}

void CeilingFanOffCommand::execute()
{
    this->ceilFan->off();
    std::cout << "Ceil Fan speed: " << this->ceilFan->getSpeed() << std::endl;
}

void CeilingFanOffCommand::unexecute()
{

}
