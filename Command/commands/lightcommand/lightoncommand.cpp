#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *obj)
{
    this->obj = obj;
}

LightOnCommand::~LightOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void LightOnCommand::execute()
{
    this->obj->on();
}

void LightOnCommand::unexecute()
{

}
