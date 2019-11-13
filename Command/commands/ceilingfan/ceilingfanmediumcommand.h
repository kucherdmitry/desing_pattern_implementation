#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanMediumCommand : public ICommand
{
public:
    CeilingFanMediumCommand(CeilingFan *ceilFan);
    ~CeilingFanMediumCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingFan *ceilFan = nullptr;
};

#endif // CEILINGFANMEDIUMCOMMAND_H
