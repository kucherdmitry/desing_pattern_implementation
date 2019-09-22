#include "iobserver.h"

IObserver::IObserver()
{
    std::clog << "Construct class IObserver " << this << std::endl;
}

IObserver::~IObserver()
{
    std::clog << "Destruct class IObserver " << this << std::endl;
}
