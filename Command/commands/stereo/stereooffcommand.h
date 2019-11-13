#ifndef STEREOOFFCOMMAND_H
#define STEREOOFFCOMMAND_H
#include "interfaces/icommand.h"
#include "devices/stereo.h"

class StereoOffCommand : public ICommand
{
public:
    StereoOffCommand(Stereo *stereo);

    void execute() override;

private:
    Stereo *stereo = nullptr;
};

#endif // STEREOOFFCOMMAND_H
