#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoOnCommand : public ICommand
{
public:
    StereoOnCommand(Stereo *obj);
    ~StereoOnCommand() override;

    void execute() override;
    void unexecute() override;

private:
    Stereo *obj = nullptr;
};

#endif // STEREOONCOMMAND_H
