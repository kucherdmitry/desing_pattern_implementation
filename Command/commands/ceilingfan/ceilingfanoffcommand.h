#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanOffCommand : public ICommand
{
public:
    CeilingFanOffCommand(CeilingFan *ceilFan);
    ~CeilingFanOffCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    CeilingFan *ceilFan = nullptr;
};

#endif // CEILINGFANOFFCOMMAND_H
