#include "garagedoorlightoncommand.h"

GarageDoorLightOnCommand::GarageDoorLightOnCommand(GarageDoor *obj)
{
    this->obj = obj;
}

GarageDoorLightOnCommand::~GarageDoorLightOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GarageDoorLightOnCommand::execute()
{
    this->obj->lightOn();
}

void GarageDoorLightOnCommand::unexecute()
{

}
