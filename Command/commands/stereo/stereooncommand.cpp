#include "stereooncommand.h"

StereoOnCommand::StereoOnCommand(Stereo *obj)
{
    this->obj = obj;
}

StereoOnCommand::~StereoOnCommand()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void StereoOnCommand::execute()
{
    this->obj->on();
}

void StereoOnCommand::unexecute()
{

}
