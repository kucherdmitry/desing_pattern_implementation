#include "ceilingfanlowcommand.h"

CeilingFanLowCommand::CeilingFanLowCommand(std::shared_ptr<CeilingFan> &obj)
{
    this->obj = obj;
}

CeilingFanLowCommand::~CeilingFanLowCommand()
{
}

void CeilingFanLowCommand::execute()
{
    this->obj->low();
    std::cout << "Ceil Fan speed: " << this->obj->getSpeed() << std::endl;
}

void CeilingFanLowCommand::unexecute()
{

}
