#include "gardenlightmanualoffcommand.h"

GardenLightManualOffCommand::GardenLightManualOffCommand(GardenLight *obj)
{
    this->obj = obj;
}

GardenLightManualOffCommand::~GardenLightManualOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GardenLightManualOffCommand::execute()
{
    this->obj->manualOff();
}

void GardenLightManualOffCommand::unexecute()
{

}
