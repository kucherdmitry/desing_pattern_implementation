#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "iobserver.h"

class ISubject
{
public:
    ISubject();
    virtual ~ISubject();

    virtual void registerObserver(IObserver *obs) = 0;
    virtual void removeObserver(IObserver *obs) = 0;
    virtual void notifyObserver() = 0;
};

#endif // ISUBJECT_H
