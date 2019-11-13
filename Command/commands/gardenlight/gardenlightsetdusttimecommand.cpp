#include "gardenlightsetdusttimecommand.h"

GardenLightSetDustTimeCommand::GardenLightSetDustTimeCommand(GardenLight *gardenLight)
{
    this->gardenLight = gardenLight;
}

void GardenLightSetDustTimeCommand::execute()
{
    this->gardenLight->setDawnTime();
}

void GardenLightSetDustTimeCommand::unexecute()
{

}
