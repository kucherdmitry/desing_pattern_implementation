#ifndef CEILINGLIGHTONCOMMAND_H
#define CEILINGLIGHTONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilinglight.h"

class CeilingLightOnCommand : public ICommand
{
public:
    CeilingLightOnCommand(CeilingLight *obj);
    ~CeilingLightOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    CeilingLight *obj = nullptr;

};

#endif // CEILINGLIGHTONCOMMAND_H
