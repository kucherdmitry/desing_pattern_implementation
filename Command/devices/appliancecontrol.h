#ifndef APPLIANCECONTROL_H
#define APPLIANCECONTROL_H
#include <iostream>

class ApplianceControl
{
public:
    ApplianceControl(std::string name);
    ~ApplianceControl();

    void on();
    void off();

private:
    std::string name;
};

#endif // APPLIANCECONTROL_H
