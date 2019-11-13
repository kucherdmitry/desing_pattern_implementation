#include "applianceoffcommand.h"

ApplianceOffCommand::ApplianceOffCommand(ApplianceControl *appControl)
{
    this->appControl = appControl;
}

void ApplianceOffCommand::execute()
{
    this->appControl->off();
}

void ApplianceOffCommand::unexecute()
{

}
