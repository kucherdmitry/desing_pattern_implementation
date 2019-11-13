#ifndef SECURITYCONTROLARMCOMMAND_H
#define SECURITYCONTROLARMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/securitycontrol.h"

class SecurityControlArmCommand : public ICommand
{
public:
    SecurityControlArmCommand(SecurityControl *securityControl);

    void execute() override;

private:
    SecurityControl *securityControl = nullptr;
};

#endif // SECURITYCONTROLARMCOMMAND_H
