#include "garagedoorstopcommand.h"

GarageDoorStopCommand::GarageDoorStopCommand(GarageDoor *obj)
{
    this->obj = obj;
}

GarageDoorStopCommand::~GarageDoorStopCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GarageDoorStopCommand::execute()
{
    this->obj->stop();
}

void GarageDoorStopCommand::unexecute()
{

}
