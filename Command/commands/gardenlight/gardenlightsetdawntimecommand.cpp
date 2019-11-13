#include "gardenlightsetdawntimecommand.h"

GardenLightSetDawnTimeCommand::GardenLightSetDawnTimeCommand(GardenLight *gardenLight)
{
    this->gardenLight = gardenLight;
}

void GardenLightSetDawnTimeCommand::execute()
{
    this->gardenLight->setDawnTime();
}

void GardenLightSetDawnTimeCommand::unexecute()
{

}
