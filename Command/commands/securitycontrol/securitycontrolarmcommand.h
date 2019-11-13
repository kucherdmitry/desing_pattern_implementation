#ifndef SECURITYCONTROLARMCOMMAND_H
#define SECURITYCONTROLARMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/securitycontrol.h"

class SecurityControlArmCommand : public ICommand
{
public:
    SecurityControlArmCommand(SecurityControl *obj);
    ~SecurityControlArmCommand() override;

    void execute() override;
    void unexecute() override;

private:
    SecurityControl *obj = nullptr;
};

#endif // SECURITYCONTROLARMCOMMAND_H
