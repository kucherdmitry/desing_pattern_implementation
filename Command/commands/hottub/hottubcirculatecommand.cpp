#include "hottubcirculatecommand.h"

HottubCirculateCommand::HottubCirculateCommand(Hottub *obj)
{
    this->obj = obj;
}

HottubCirculateCommand::~HottubCirculateCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void HottubCirculateCommand::execute()
{
    this->obj->circulate();
}

void HottubCirculateCommand::unexecute()
{

}
