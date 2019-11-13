#include "tvsetinputchannel.h"

TVSetInputChannel::TVSetInputChannel(TV *obj)
{
    this->obj = obj;
}

TVSetInputChannel::~TVSetInputChannel()
{
    if(this->obj != nullptr)
    {
        delete this->obj;
    }
}

void TVSetInputChannel::execute()
{
    this->obj->setInputChannel();
}

void TVSetInputChannel::unexecute()
{

}
