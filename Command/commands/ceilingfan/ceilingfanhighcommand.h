#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanHighCommand : public ICommand
{
public:
    CeilingFanHighCommand(CeilingFan *ceilFan);
    ~CeilingFanHighCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingFan *ceilFan = nullptr;
};

#endif // CEILINGFANHIGHCOMMAND_H
