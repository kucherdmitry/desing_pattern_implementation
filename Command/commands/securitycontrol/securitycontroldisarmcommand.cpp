#include "securitycontroldisarmcommand.h"

SecurityControlDisarmCommand::SecurityControlDisarmCommand(SecurityControl *securityControl)
{
    this->securityControl = securityControl;
}

void SecurityControlDisarmCommand::execute()
{
    this->securityControl->disarm();
}
