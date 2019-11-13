#ifndef ICOMMAND_H
#define ICOMMAND_H
#include <memory>

class ICommand
{
public:
    ICommand();
    virtual ~ICommand() = default;

    virtual void execute() = 0;
    virtual void unexecute() = 0;
};

#endif // ICOMMAND_H
