#include "stereosetvolumecommand.h"

StereoSetVolumeCommand::StereoSetVolumeCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoSetVolumeCommand::~StereoSetVolumeCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoSetVolumeCommand::execute()
{
    this->obj->setVolume();
}

void StereoSetVolumeCommand::unexecute()
{

}
