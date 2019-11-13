#include "tvoncommand.h"

TVOnCommand::TVOnCommand(TV *tv)
{
    this->tv = tv;
}

void TVOnCommand::execute()
{
    this->tv->on();
}
