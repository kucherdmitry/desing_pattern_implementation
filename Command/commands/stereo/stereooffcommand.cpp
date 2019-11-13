#include "stereooffcommand.h"

StereoOffCommand::StereoOffCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoOffCommand::execute()
{
    this->stereo->off();
}
