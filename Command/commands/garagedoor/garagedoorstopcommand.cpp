#include "garagedoorstopcommand.h"

GarageDoorStopCommand::GarageDoorStopCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}

void GarageDoorStopCommand::execute()
{
    this->garageDoor->stop();
}

void GarageDoorStopCommand::unexecute()
{

}
