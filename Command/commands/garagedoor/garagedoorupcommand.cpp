#include "garagedoorupcommand.h"

GarageDoorUpCommand::GarageDoorUpCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}

void GarageDoorUpCommand::execute()
{
    this->garageDoor->up();
}

void GarageDoorUpCommand::unexecute()
{

}
