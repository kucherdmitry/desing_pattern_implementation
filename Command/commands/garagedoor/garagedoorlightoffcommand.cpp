#include "garagedoorlightoffcommand.h"

GarageDoorLightOffCommand::GarageDoorLightOffCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}

void GarageDoorLightOffCommand::execute()
{
    this->garageDoor->lightOff();
}

void GarageDoorLightOffCommand::unexecute()
{

}
