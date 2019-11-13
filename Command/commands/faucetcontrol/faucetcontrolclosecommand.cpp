#include "faucetcontrolclosecommand.h"

FaucetControlCloseCommand::FaucetControlCloseCommand(FaucetControl *faucetControl)
{
    this->faucetControl = faucetControl;
}

void FaucetControlCloseCommand::execute()
{
    this->faucetControl->closeValue();
}

void FaucetControlCloseCommand::unexecute()
{

}
