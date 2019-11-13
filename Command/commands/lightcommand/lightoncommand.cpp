#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
}

void LightOnCommand::execute()
{
    this->light->on();
}
