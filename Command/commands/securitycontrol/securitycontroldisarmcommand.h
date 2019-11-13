#ifndef SECURITYCONTROLDISARMCOMMAND_H
#define SECURITYCONTROLDISARMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/securitycontrol.h"

class SecurityControlDisarmCommand : public ICommand
{
public:
    SecurityControlDisarmCommand(SecurityControl *obj);
    ~SecurityControlDisarmCommand() override;

    void execute() override;
    void unexecute() override;

private:
    SecurityControl *obj = nullptr;
};

#endif // SECURITYCONTROLDISARMCOMMAND_H
