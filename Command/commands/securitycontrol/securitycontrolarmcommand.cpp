#include "securitycontrolarmcommand.h"

SecurityControlArmCommand::SecurityControlArmCommand(SecurityControl *obj)
{
    this->obj = obj;
}

SecurityControlArmCommand::~SecurityControlArmCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void SecurityControlArmCommand::execute()
{
    this->obj->arm();
}

void SecurityControlArmCommand::unexecute()
{

}
