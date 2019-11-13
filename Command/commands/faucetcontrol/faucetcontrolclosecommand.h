#ifndef FAUCETCONTROLCLOSECOMMAND_H
#define FAUCETCONTROLCLOSECOMMAND_H
#include "interfaces/icommand.h"
#include "devices/faucetcontrol.h"

class FaucetControlCloseCommand : public ICommand
{
public:
    FaucetControlCloseCommand(FaucetControl *faucetControl);
    ~FaucetControlCloseCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    FaucetControl *faucetControl = nullptr;
};

#endif // FAUCETCONTROLCLOSECOMMAND_H
