#ifndef NOCOMMAND_H
#define NOCOMMAND_H
#include "interfaces/icommand.h"

class noCommand : public ICommand
{
public:
    noCommand();

    void execute() override;
    void unexecute() override;
};

#endif // NOCOMMAND_H
