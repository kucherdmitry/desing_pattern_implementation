#ifndef FAUCETCONTROLCLOSECOMMAND_H
#define FAUCETCONTROLCLOSECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/faucetcontrol.h"

class FaucetControlCloseCommand : public ICommand
{
public:
    FaucetControlCloseCommand(FaucetControl *obj);
    ~FaucetControlCloseCommand() override;

    void execute() override;
    void unexecute() override;

private:
    FaucetControl *obj = nullptr;
};

#endif // FAUCETCONTROLCLOSECOMMAND_H
