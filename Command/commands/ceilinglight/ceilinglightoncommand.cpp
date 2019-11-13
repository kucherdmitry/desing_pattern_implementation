#include "ceilinglightoncommand.h"

CeilingLightOnCommand::CeilingLightOnCommand(CeilingLight *ceilLight)
{
    this->ceilLight = ceilLight;
}

void CeilingLightOnCommand::execute()
{
    this->ceilLight->on();
}

void CeilingLightOnCommand::unexecute()
{

}
