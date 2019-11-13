#include "stereooncommand.h"

StereoOnCommand::StereoOnCommand(Stereo *stereo)
{
    this->stereo = stereo;
}

void StereoOnCommand::execute()
{
    this->stereo->on();
}
