#ifndef CEILINGLIGHTONCOMMAND_H
#define CEILINGLIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightOnCommand : public ICommand
{
public:
    CeilingLightOnCommand(CeilingLight *ceilLight);
    ~CeilingLightOnCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *ceilLight = nullptr;

};

#endif // CEILINGLIGHTONCOMMAND_H
