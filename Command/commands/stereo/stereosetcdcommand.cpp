#include "stereosetcdcommand.h"

StereoSetCDCommand::StereoSetCDCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoSetCDCommand::~StereoSetCDCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoSetCDCommand::execute()
{
    this->obj->setCD();
}

void StereoSetCDCommand::unexecute()
{

}
