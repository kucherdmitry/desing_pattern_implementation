#include "ceilingfanoffcommand.h"

CeilingFanOffCommand::CeilingFanOffCommand(std::shared_ptr<CeilingFan> &obj)
{
    this->obj = obj;
}

CeilingFanOffCommand::~CeilingFanOffCommand()
{
}

void CeilingFanOffCommand::execute()
{
    this->obj->off();
    std::cout << "Ceil Fan speed: " << this->obj->getSpeed() << std::endl;
}

void CeilingFanOffCommand::unexecute()
{

}
