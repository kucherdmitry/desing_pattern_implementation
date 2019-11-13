#include "outdoorlightoffcommand.h"

OutdoorLightOffCommand::OutdoorLightOffCommand(OutdoorLight *outdoorLight)
{
    this->outdoorLight = outdoorLight;
}

void OutdoorLightOffCommand::execute()
{
    this->outdoorLight->off();
}
