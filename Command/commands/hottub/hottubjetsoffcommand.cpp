#include "hottubjetsoffcommand.h"

HottubJetsOffCommand::HottubJetsOffCommand(Hottub *obj)
{
    this->obj = obj;
}

HottubJetsOffCommand::~HottubJetsOffCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void HottubJetsOffCommand::execute()
{
    this->obj->jetsOff();
}
