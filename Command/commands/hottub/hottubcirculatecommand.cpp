#include "hottubcirculatecommand.h"

HottubCirculateCommand::HottubCirculateCommand(Hottub *hottub)
{
    this->hottub = hottub;
}

void HottubCirculateCommand::execute()
{
    this->hottub->circulate();
}

void HottubCirculateCommand::unexecute()
{

}
