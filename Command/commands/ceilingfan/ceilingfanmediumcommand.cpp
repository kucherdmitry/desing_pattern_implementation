#include "ceilingfanmediumcommand.h"

CeilingFanMediumCommand::CeilingFanMediumCommand(std::shared_ptr<CeilingFan> &obj)
{
    this->obj = obj;
}

CeilingFanMediumCommand::~CeilingFanMediumCommand()
{
}

void CeilingFanMediumCommand::execute()
{
    this->obj->medium();
    std::cout << "Ceil Fan speed: " << this->obj->getSpeed() << std::endl;
}

void CeilingFanMediumCommand::unexecute()
{

}
