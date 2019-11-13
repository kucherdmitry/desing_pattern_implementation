#include "stereosetradiocommand.h"

StereoSetRadioCommand::StereoSetRadioCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoSetRadioCommand::execute()
{
    this->stereo->setRadio();
}
