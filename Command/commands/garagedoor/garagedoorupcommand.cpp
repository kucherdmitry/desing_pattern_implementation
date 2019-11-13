#include "garagedoorupcommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor *obj)
{
    this->obj = obj;
}

GarageDoorUpCommand::~GarageDoorUpCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GarageDoorUpCommand::execute()
{
    this->obj->up();
}

void GarageDoorUpCommand::unexecute()
{

}
