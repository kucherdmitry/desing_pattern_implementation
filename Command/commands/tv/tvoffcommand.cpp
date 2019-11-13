#include "tvoffcommand.h"

TVOffCommand::TVOffCommand(TV *obj)
{
    this->obj = obj;
}

TVOffCommand::~TVOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void TVOffCommand::execute()
{
    this->obj->off();
}

void TVOffCommand::unexecute()
{

}
