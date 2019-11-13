#include "outdoorlightoncommand.h"

OutdoorLightOnCommand::OutdoorLightOnCommand(OutdoorLight *obj)
{
    this->obj = obj;
}

OutdoorLightOnCommand::~OutdoorLightOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void OutdoorLightOnCommand::execute()
{
    this->obj->on();
}
