#include "ceilinglightoffcommand.h"

CeilingLightOffCommand::CeilingLightOffCommand(CeilingLight *ceilLight)
{
    this->ceilLight = ceilLight;
}

void CeilingLightOffCommand::execute()
{
    this->ceilLight->off();
}

void CeilingLightOffCommand::unexecute()
{

}
