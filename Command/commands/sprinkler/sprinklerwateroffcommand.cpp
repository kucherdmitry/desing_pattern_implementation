#include "sprinklerwateroffcommand.h"

SprinklerWaterOffCommand::SprinklerWaterOffCommand(Sprinkler *sprinkler)
{
    this->sprinkler = sprinkler;
}

void SprinklerWaterOffCommand::execute()
{
    this->sprinkler->waterOff();
}
