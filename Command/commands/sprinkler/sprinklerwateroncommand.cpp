#include "sprinklerwateroncommand.h"

SprinklerWaterOnCommand::SprinklerWaterOnCommand(Sprinkler *sprinkler)
{
    this->sprinkler = sprinkler;
}

void SprinklerWaterOnCommand::execute()
{
    this->sprinkler->waterOn();
}
