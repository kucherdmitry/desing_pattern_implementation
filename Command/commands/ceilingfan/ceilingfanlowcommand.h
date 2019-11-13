#ifndef CEILINGFANLOWCOMMAND_H
#define CEILINGFANLOWCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanLowCommand : public ICommand
{
public:
    CeilingFanLowCommand(std::shared_ptr<CeilingFan> &obj);
    ~CeilingFanLowCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<CeilingFan> obj = nullptr;
};

#endif // CEILINGFANLOWCOMMAND_H
