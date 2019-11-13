#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "interfaces/icommand.h"
#include "commands/nocommand.h"
#include <vector>

class RemoteControl
{
public:
    RemoteControl();
    ~RemoteControl();

    void setCommand(size_t slot, std::unique_ptr<ICommand> &onCommand, std::unique_ptr<ICommand> &offCommand);
    void onButtonWasPushed(size_t slot);
    void offButtonWasPushed(size_t slot);

private:
    std::vector<std::unique_ptr<ICommand>> onCommands;
    std::vector<std::unique_ptr<ICommand>> offCommands;
};

#endif // REMOTECONTROL_H
