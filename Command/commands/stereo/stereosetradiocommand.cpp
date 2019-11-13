#include "stereosetradiocommand.h"

StereoSetRadioCommand::StereoSetRadioCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoSetRadioCommand::~StereoSetRadioCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoSetRadioCommand::execute()
{
    this->obj->setRadio();
}

void StereoSetRadioCommand::unexecute()
{

}
