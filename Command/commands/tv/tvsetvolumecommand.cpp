#include "tvsetvolumecommand.h"

TVSetVolumeCommand::TVSetVolumeCommand(TV *tv)
{
    this->tv = tv;
}

void TVSetVolumeCommand::execute()
{
    this->tv->setVolume();
}
