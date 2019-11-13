#include "ceilinglightdimcommand.h"

CeilingLightDimCommand::CeilingLightDimCommand(CeilingLight *ceilLight)
{
    this->obj = ceilLight;
}

CeilingLightDimCommand::~CeilingLightDimCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void CeilingLightDimCommand::execute()
{
    this->obj->dim();
}

void CeilingLightDimCommand::unexecute()
{

}
