#ifndef CEILINGFANHIGHCOMMAND_H
#define CEILINGFANHIGHCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanHighCommand : public ICommand
{
public:
    CeilingFanHighCommand(std::shared_ptr<CeilingFan> &obj);
    ~CeilingFanHighCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<CeilingFan> obj = nullptr;
};

#endif // CEILINGFANHIGHCOMMAND_H
