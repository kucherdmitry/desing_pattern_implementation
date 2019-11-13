#include "stereosetdvdcommand.h"

StereoSetDVDCommand::StereoSetDVDCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoSetDVDCommand::~StereoSetDVDCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoSetDVDCommand::execute()
{
    this->obj->setDVD();
}

void StereoSetDVDCommand::unexecute()
{

}
