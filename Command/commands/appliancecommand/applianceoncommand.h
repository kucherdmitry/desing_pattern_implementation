#ifndef APPLIANCEONCOMMAND_H
#define APPLIANCEONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/appliancecontrol.h"

class ApplianceOnCommand : public ICommand
{
public:
    ApplianceOnCommand(std::shared_ptr<ApplianceControl> &obj);
    ~ApplianceOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<ApplianceControl> obj = nullptr;
};

#endif // APPLIANCEONCOMMAND_H
