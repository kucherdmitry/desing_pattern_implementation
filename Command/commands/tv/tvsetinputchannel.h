#ifndef TVSETINPUTCHANNEL_H
#define TVSETINPUTCHANNEL_H
#include "interfaces/icommand.h"
#include "devices/tv.h"

class TVSetInputChannel : public ICommand
{
public:
    TVSetInputChannel(TV *tv);

    void execute() override;

private:
    TV *tv = nullptr;
};

#endif // TVSETINPUTCHANNEL_H
