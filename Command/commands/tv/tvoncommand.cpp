#include "tvoncommand.h"

TVOnCommand::TVOnCommand(TV *obj)
{
    this->obj = obj;
}

TVOnCommand::~TVOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void TVOnCommand::execute()
{
    this->obj->on();
}

void TVOnCommand::unexecute()
{

}
