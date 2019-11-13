#include "applianceoncommand.h"

ApplianceOnCommand::ApplianceOnCommand(std::shared_ptr<ApplianceControl> &obj)
{
    this->obj = obj;
}

ApplianceOnCommand::~ApplianceOnCommand()
{
}

void ApplianceOnCommand::execute()
{
    this->obj.get()->on();
}

void ApplianceOnCommand::unexecute()
{

}
