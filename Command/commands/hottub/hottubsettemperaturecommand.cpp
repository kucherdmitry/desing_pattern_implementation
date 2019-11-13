#include "hottubsettemperaturecommand.h"

HottubSetTemperatureCommand::HottubSetTemperatureCommand(Hottub *obj)
{
    this->obj = obj;
}

HottubSetTemperatureCommand::~HottubSetTemperatureCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void HottubSetTemperatureCommand::execute()
{
    this->obj->setTemperature();
}

void HottubSetTemperatureCommand::unexecute()
{

}
