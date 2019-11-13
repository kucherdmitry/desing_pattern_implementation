#include "applianceoffcommand.h"

ApplianceOffCommand::ApplianceOffCommand(std::shared_ptr<ApplianceControl> &obj)
{
    this->obj = obj;
}

ApplianceOffCommand::~ApplianceOffCommand()
{
}

void ApplianceOffCommand::execute()
{
    this->obj.get()->off();
}

void ApplianceOffCommand::unexecute()
{

}
