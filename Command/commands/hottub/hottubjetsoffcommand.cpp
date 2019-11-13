#include "hottubjetsoffcommand.h"

HottubJetsOffCommand::HottubJetsOffCommand(Hottub *hottub)
{
    this->hottub = hottub;
}

void HottubJetsOffCommand::execute()
{
    this->hottub->jetsOff();
}
