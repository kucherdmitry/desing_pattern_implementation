#include "faucetcontrolopencommand.h"

FaucetControlOpenCommand::FaucetControlOpenCommand(FaucetControl *obj)
{
    this->obj = obj;
}

FaucetControlOpenCommand::~FaucetControlOpenCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void FaucetControlOpenCommand::execute()
{
    this->obj->openValue();
}

void FaucetControlOpenCommand::unexecute()
{

}
