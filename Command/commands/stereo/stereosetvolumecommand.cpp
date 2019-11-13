#include "stereosetvolumecommand.h"

StereoSetVolumeCommand::StereoSetVolumeCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoSetVolumeCommand::execute()
{
    this->stereo->setVolume();
}
