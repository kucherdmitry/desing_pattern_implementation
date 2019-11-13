#include "remotecontrol.h"

RemoteControl::RemoteControl()
{
    for(size_t i = 0; i < 7; i++)
    {
        onCommands.push_back(nullptr);
        offCommands.push_back(nullptr);
    }
}

RemoteControl::~RemoteControl()
{

}

void RemoteControl::setCommand(size_t slot, std::unique_ptr<ICommand> &onCommand, std::unique_ptr<ICommand> &offCommand)
{
    onCommands[slot] = std::move(onCommand);
    offCommands[slot] = std::move(offCommand);
}

void RemoteControl::onButtonWasPushed(size_t slot)
{
    if(onCommands[slot] != nullptr)
    {
        onCommands[slot]->execute();
    }

}

void RemoteControl::offButtonWasPushed(size_t slot)
{
    if(offCommands[slot] != nullptr)
    {
        offCommands[slot]->execute();
    }
}
