#include "gardenlightsetdawntimecommand.h"

GardenLightSetDawnTimeCommand::GardenLightSetDawnTimeCommand(GardenLight *obj)
{
    this->obj = obj;
}

GardenLightSetDawnTimeCommand::~GardenLightSetDawnTimeCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GardenLightSetDawnTimeCommand::execute()
{
    this->obj->setDawnTime();
}

void GardenLightSetDawnTimeCommand::unexecute()
{

}
