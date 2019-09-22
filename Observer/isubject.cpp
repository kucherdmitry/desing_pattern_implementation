#include "isubject.h"

ISubject::ISubject()
{
    std::clog << "Construct class ISubject " << this << std::endl;
}

ISubject::~ISubject()
{
    std::clog << "Destruct class ISubject " << this << std::endl;
}
