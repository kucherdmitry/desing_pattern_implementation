#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *obj)
{
    this->obj = obj;
}

LightOffCommand::~LightOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void LightOffCommand::execute()
{
    this->obj->off();
}

void LightOffCommand::unexecute()
{

}
