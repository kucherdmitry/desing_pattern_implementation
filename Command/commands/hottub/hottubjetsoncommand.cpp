#include "hottubjetsoncommand.h"

HottubJetsOnCommand::HottubJetsOnCommand(Hottub *hottub)
{
    this->hottub = hottub;
}

void HottubJetsOnCommand::execute()
{
    this->hottub->jetsOn();
}

void HottubJetsOnCommand::unexecute()
{

}
