#ifndef CEILINGFANOFFCOMMAND_H
#define CEILINGFANOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/ceilingfan.h"

class CeilingFanOffCommand : public ICommand
{
public:
    CeilingFanOffCommand(std::shared_ptr<CeilingFan> &obj);
    ~CeilingFanOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<CeilingFan> obj = nullptr;
};

#endif // CEILINGFANOFFCOMMAND_H
