#include "outdoorlightoffcommand.h"

OutdoorLightOffCommand::OutdoorLightOffCommand(OutdoorLight *obj)
{
    this->obj = obj;
}

OutdoorLightOffCommand::~OutdoorLightOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void OutdoorLightOffCommand::execute()
{
    this->obj->off();
}
