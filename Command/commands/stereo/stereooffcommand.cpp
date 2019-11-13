#include "stereooffcommand.h"

StereoOffCommand::StereoOffCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoOffCommand::~StereoOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoOffCommand::execute()
{
    this->obj->off();
}

void StereoOffCommand::unexecute()
{

}
