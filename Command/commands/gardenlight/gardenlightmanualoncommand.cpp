#include "gardenlightmanualoncommand.h"

GardenLightManualOnCommand::GardenLightManualOnCommand(GardenLight *obj)
{
    this->obj = obj;
}

GardenLightManualOnCommand::~GardenLightManualOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GardenLightManualOnCommand::execute()
{
    this->obj->manualOn();
}

void GardenLightManualOnCommand::unexecute()
{

}
