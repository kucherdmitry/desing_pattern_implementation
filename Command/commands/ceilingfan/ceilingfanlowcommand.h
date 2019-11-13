#ifndef CEILINGFANLOWCOMMAND_H
#define CEILINGFANLOWCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanLowCommand : public ICommand
{
public:
    CeilingFanLowCommand(CeilingFan *ceilFan);
    ~CeilingFanLowCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingFan *ceilFan = nullptr;
};

#endif // CEILINGFANLOWCOMMAND_H
