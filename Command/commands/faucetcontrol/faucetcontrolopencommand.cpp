#include "faucetcontrolopencommand.h"

FaucetControlOpenCommand::FaucetControlOpenCommand(FaucetControl *faucetControl)
{
    this->faucetControl = faucetControl;
}

void FaucetControlOpenCommand::execute()
{
    this->faucetControl->openValue();
}

void FaucetControlOpenCommand::unexecute()
{

}
