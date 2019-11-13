#include "faucetcontrolclosecommand.h"

FaucetControlCloseCommand::FaucetControlCloseCommand(FaucetControl *obj)
{
    this->obj = obj;
}

FaucetControlCloseCommand::~FaucetControlCloseCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void FaucetControlCloseCommand::execute()
{
    this->obj->closeValue();
}

void FaucetControlCloseCommand::unexecute()
{

}
