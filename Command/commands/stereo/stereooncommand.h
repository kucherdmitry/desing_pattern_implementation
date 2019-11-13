#ifndef STEREOONCOMMAND_H
#define STEREOONCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoOnCommand : public ICommand
{
public:
    StereoOnCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOONCOMMAND_H
