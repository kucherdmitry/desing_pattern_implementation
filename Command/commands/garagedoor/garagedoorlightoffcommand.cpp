#include "garagedoorlightoffcommand.h"

GarageDoorLightOffCommand::GarageDoorLightOffCommand(GarageDoor *obj)
{
    this->obj = obj;
}

GarageDoorLightOffCommand::~GarageDoorLightOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GarageDoorLightOffCommand::execute()
{
    this->obj->lightOff();
}

void GarageDoorLightOffCommand::unexecute()
{

}
