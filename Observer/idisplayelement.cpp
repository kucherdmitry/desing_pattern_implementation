#include "idisplayelement.h"

IDisplayElement::IDisplayElement()
{
    std::clog << "Construct class IDisplayElement " << this << std::endl;
}

IDisplayElement::~IDisplayElement()
{
    std::clog << "Destruct class IDisplayElement " << this << std::endl;
}
