#ifndef FAUCETCONTROLOPENCOMMAND_H
#define FAUCETCONTROLOPENCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/faucetcontrol.h"

class FaucetControlOpenCommand : public ICommand
{
public:
    FaucetControlOpenCommand(FaucetControl *faucetControl);
    ~FaucetControlOpenCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    FaucetControl *faucetControl = nullptr;
};

#endif // FAUCETCONTROLOPENCOMMAND_H
