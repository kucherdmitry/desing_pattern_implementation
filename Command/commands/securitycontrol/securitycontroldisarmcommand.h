#ifndef SECURITYCONTROLDISARMCOMMAND_H
#define SECURITYCONTROLDISARMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/securitycontrol.h"

class SecurityControlDisarmCommand : public ICommand
{
public:
    SecurityControlDisarmCommand(SecurityControl *securityControl);

    void execute() override;

private:
    SecurityControl *securityControl = nullptr;
};

#endif // SECURITYCONTROLDISARMCOMMAND_H
