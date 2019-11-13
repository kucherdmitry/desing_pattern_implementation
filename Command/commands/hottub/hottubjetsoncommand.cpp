#include "hottubjetsoncommand.h"

HottubJetsOnCommand::HottubJetsOnCommand(Hottub *obj)
{
    this->obj = obj;
}

HottubJetsOnCommand::~HottubJetsOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void HottubJetsOnCommand::execute()
{
    this->obj->jetsOn();
}

void HottubJetsOnCommand::unexecute()
{

}
