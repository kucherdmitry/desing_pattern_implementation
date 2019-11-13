#include "garagedoordowncommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *obj)
{
    this->obj = obj;
}

GarageDoorDownCommand::~GarageDoorDownCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GarageDoorDownCommand::execute()
{
    this->obj->down();
}

void GarageDoorDownCommand::unexecute()
{

}
