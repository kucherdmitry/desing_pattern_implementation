#include "ceilinglightoncommand.h"

CeilingLightOnCommand::CeilingLightOnCommand(CeilingLight *obj)
{
    this->obj = obj;
}

CeilingLightOnCommand::~CeilingLightOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void CeilingLightOnCommand::execute()
{
    this->obj->on();
}

void CeilingLightOnCommand::unexecute()
{

}
