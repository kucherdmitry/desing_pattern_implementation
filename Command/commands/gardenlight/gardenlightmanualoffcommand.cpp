#include "gardenlightmanualoffcommand.h"

GardenLightManualOffCommand::GardenLightManualOffCommand(GardenLight *gardenLight)
{
    this->gardenLight = gardenLight;
}

void GardenLightManualOffCommand::execute()
{
    this->gardenLight->manualOff();
}

void GardenLightManualOffCommand::unexecute()
{

}
