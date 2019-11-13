#include "garagedoordowncommand.h"

GarageDoorDownCommand::GarageDoorDownCommand(GarageDoor *garageDoor)
{
    this->garageDoor = garageDoor;
}

void GarageDoorDownCommand::execute()
{
    this->garageDoor->down();
}

void GarageDoorDownCommand::unexecute()
{

}
