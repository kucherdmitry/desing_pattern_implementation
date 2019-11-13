#include "hottubsettemperaturecommand.h"

HottubSetTemperatureCommand::HottubSetTemperatureCommand(Hottub *hottub)
{
    this->hottub = hottub;
}

void HottubSetTemperatureCommand::execute()
{
    this->hottub->setTemperature();
}

void HottubSetTemperatureCommand::unexecute()
{

}
