#ifndef FAUCETCONTROLOPENCOMMAND_H
#define FAUCETCONTROLOPENCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/faucetcontrol.h"

class FaucetControlOpenCommand : public ICommand
{
public:
    FaucetControlOpenCommand(FaucetControl *obj);
    ~FaucetControlOpenCommand() override;

    void execute() override;
    void unexecute() override;

private:
    FaucetControl *obj = nullptr;
};

#endif // FAUCETCONTROLOPENCOMMAND_H
