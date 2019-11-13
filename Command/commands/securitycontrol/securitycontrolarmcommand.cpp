#include "securitycontrolarmcommand.h"

SecurityControlArmCommand::SecurityControlArmCommand(SecurityControl *securityControl)
{
    this->securityControl = securityControl;
}

void SecurityControlArmCommand::execute()
{
    this->securityControl->arm();
}
