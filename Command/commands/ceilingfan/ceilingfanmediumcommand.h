#ifndef CEILINGFANMEDIUMCOMMAND_H
#define CEILINGFANMEDIUMCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanMediumCommand : public ICommand
{
public:
    CeilingFanMediumCommand(std::shared_ptr<CeilingFan> &obj);
    ~CeilingFanMediumCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<CeilingFan> obj = nullptr;
};

#endif // CEILINGFANMEDIUMCOMMAND_H
