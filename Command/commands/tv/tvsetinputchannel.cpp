#include "tvsetinputchannel.h"

TVSetInputChannel::TVSetInputChannel(TV *tv)
{
    this->tv = tv;
}

void TVSetInputChannel::execute()
{
    this->tv->setInputChannel();
}
