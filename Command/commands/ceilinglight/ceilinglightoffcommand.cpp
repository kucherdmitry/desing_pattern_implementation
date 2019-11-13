#include "ceilinglightoffcommand.h"

CeilingLightOffCommand::CeilingLightOffCommand(CeilingLight *obj)
{
    this->obj = obj;
}

CeilingLightOffCommand::~CeilingLightOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void CeilingLightOffCommand::execute()
{
    this->obj->off();
}

void CeilingLightOffCommand::unexecute()
{

}
