#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
}

void LightOffCommand::execute()
{
    this->light->off();
}
