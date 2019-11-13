#include "outdoorlightoncommand.h"

OutdoorLightOnCommand::OutdoorLightOnCommand(OutdoorLight *outdoorLight)
{
    this->outdoorLight = outdoorLight;
}

void OutdoorLightOnCommand::execute()
{
    this->outdoorLight->on();
}
