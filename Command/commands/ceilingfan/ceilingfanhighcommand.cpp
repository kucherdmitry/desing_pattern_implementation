#include "ceilingfanhighcommand.h"

CeilingFanHighCommand::CeilingFanHighCommand(std::shared_ptr<CeilingFan> &obj)
{
    this->obj = obj;
}

CeilingFanHighCommand::~CeilingFanHighCommand()
{

}

void CeilingFanHighCommand::execute()
{
    this->obj->high();
    std::cout << "Ceil Fan speed: " << this->obj->getSpeed() << std::endl;
}

void CeilingFanHighCommand::unexecute()
{

}
