#include "stereosetdvdcommand.h"

StereoSetDVDCommand::StereoSetDVDCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoSetDVDCommand::execute()
{
    this->stereo->setDVD();
}
