#include "ceilinglightdimcommand.h"

CeilingLightDimCommand::CeilingLightDimCommand(CeilingLight *ceilLight)
{
    this->ceilLight = ceilLight;
}

void CeilingLightDimCommand::execute()
{
    this->ceilLight->dim();
}

void CeilingLightDimCommand::unexecute()
{

}
