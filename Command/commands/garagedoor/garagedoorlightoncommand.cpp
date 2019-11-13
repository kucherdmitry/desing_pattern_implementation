#include "garagedoorlightoncommand.h"

GarageDoorLightOnCommand::GarageDoorLightOnCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}

void GarageDoorLightOnCommand::execute()
{
    this->garageDoor->lightOn();
}

void GarageDoorLightOnCommand::unexecute()
{

}
