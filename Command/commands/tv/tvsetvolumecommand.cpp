#include "tvsetvolumecommand.h"

TVSetVolumeCommand::TVSetVolumeCommand(TV *obj)
{
    this->obj = obj;
}

TVSetVolumeCommand::~TVSetVolumeCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void TVSetVolumeCommand::execute()
{
    this->obj->setVolume();
}

void TVSetVolumeCommand::unexecute()
{

}
