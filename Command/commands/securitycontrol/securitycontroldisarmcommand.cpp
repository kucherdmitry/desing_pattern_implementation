#include "securitycontroldisarmcommand.h"

SecurityControlDisarmCommand::SecurityControlDisarmCommand(SecurityControl *obj)
{
    this->obj = obj;
}

SecurityControlDisarmCommand::~SecurityControlDisarmCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void SecurityControlDisarmCommand::execute()
{
    this->obj->disarm();
}

void SecurityControlDisarmCommand::unexecute()
{

}
