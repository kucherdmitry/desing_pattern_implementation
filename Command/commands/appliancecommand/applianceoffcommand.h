#ifndef APPLIANCEOFFCOMMAND_H
#define APPLIANCEOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/appliancecontrol.h"

class ApplianceOffCommand : public ICommand
{
public:
    ApplianceOffCommand(ApplianceControl *appControl);
    ~ApplianceOffCommand() override = default;

    void execute() override;
    void unexecute() override;

private:
    ApplianceControl *appControl = nullptr;
};

#endif // APPLIANCEOFFCOMMAND_H
