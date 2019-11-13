#ifndef APPLIANCEONCOMMAND_H
#define APPLIANCEONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/appliancecontrol.h"

class ApplianceOnCommand : public ICommand
{
public:
    ApplianceOnCommand(ApplianceControl *appControl);
    ~ApplianceOnCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    ApplianceControl *appControl = nullptr;
};

#endif // APPLIANCEONCOMMAND_H
