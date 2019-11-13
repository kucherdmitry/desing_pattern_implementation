#include "sprinklerwateroffcommand.h"

SprinklerWaterOffCommand::SprinklerWaterOffCommand(Sprinkler *obj)
{
    this->obj = obj;
}

SprinklerWaterOffCommand::~SprinklerWaterOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void SprinklerWaterOffCommand::execute()
{
    this->obj->waterOff();
}

void SprinklerWaterOffCommand::unexecute()
{

}
