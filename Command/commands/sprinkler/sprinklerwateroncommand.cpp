#include "sprinklerwateroncommand.h"

SprinklerWaterOnCommand::SprinklerWaterOnCommand(Sprinkler *obj)
{
    this->obj = obj;
}

SprinklerWaterOnCommand::~SprinklerWaterOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void SprinklerWaterOnCommand::execute()
{
    this->obj->waterOn();
}

void SprinklerWaterOnCommand::unexecute()
{

}
