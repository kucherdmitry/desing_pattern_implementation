#include "applianceoncommand.h"

ApplianceOnCommand::ApplianceOnCommand(ApplianceControl *appControl)
{
    this->appControl = appControl;
}

void ApplianceOnCommand::execute()
{
    this->appControl->on();
}

void ApplianceOnCommand::unexecute()
{

}
