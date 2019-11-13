#include "gardenlightmanualoncommand.h"

GardenLightManualOnCommand::GardenLightManualOnCommand(GardenLight *gardenLight)
{
    this->gardenLight = gardenLight;
}

void GardenLightManualOnCommand::execute()
{
    this->gardenLight->manualOn();
}

void GardenLightManualOnCommand::unexecute()
{

}
