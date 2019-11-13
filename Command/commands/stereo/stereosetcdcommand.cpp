#include "stereosetcdcommand.h"

StereoSetCDCommand::StereoSetCDCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoSetCDCommand::execute()
{
    this->stereo->setCD();
}
