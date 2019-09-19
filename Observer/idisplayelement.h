#ifndef IDISPLAYELEMENT_H
#define IDISPLAYELEMENT_H


class IDisplayElement
{
public:
    IDisplayElement();
    virtual ~IDisplayElement();

    virtual void display() = 0;
};

#endif // IDISPLAYELEMENT_H
