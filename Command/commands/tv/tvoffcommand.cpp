#include "tvoffcommand.h"

TVOffCommand::TVOffCommand(TV *tv)
{
    this->tv = tv;
}

void TVOffCommand::execute()
{
    this->tv->off();
}
