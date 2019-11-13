#include "remotecontrol.h"

RemoteControl::RemoteControl()
{
    ICommand *noCommand = new class noCommand;
    for(size_t i = 0; i < 7; i++)
    {
        onCommands.push_back(noCommand);
        offCommands.push_back(noCommand);
    }
    delete noCommand;
}

RemoteControl::~RemoteControl()
{
    for(size_t i = 0; i < 7; i++)
    {
        delete onCommands[i];
        delete offCommands[i];
    }
}

void RemoteControl::setCommand(size_t slot, ICommand *onCommand, ICommand *offCommand)
{
    onCommands[slot] = onCommand;
    offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(size_t slot)
{
    onCommands[slot]->execute();
}

void RemoteControl::offButtonWasPushed(size_t slot)
{
    offCommands[slot]->execute();
}
