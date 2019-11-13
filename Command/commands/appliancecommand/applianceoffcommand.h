#ifndef APPLIANCEOFFCOMMAND_H
#define APPLIANCEOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/appliancecontrol.h"

class ApplianceOffCommand : public ICommand
{
public:
    ApplianceOffCommand(std::shared_ptr<ApplianceControl> &obj);
    ~ApplianceOffCommand() override;

    void execute() override;
    void unexecute() override;

private:
    std::shared_ptr<ApplianceControl> obj = nullptr;
};

#endif // APPLIANCEOFFCOMMAND_H
