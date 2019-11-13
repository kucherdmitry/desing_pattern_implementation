#include "gardenlightsetdusttimecommand.h"

GardenLightSetDustTimeCommand::GardenLightSetDustTimeCommand(GardenLight *obj)
{
    this->obj = obj;
}

GardenLightSetDustTimeCommand::~GardenLightSetDustTimeCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void GardenLightSetDustTimeCommand::execute()
{
    this->obj->setDawnTime();
}

void GardenLightSetDustTimeCommand::unexecute()
{

}
