#ifndef FAUCETCONTROL_H
#define FAUCETCONTROL_H
#include <iostream>

class FaucetControl
{
public:
    FaucetControl(std::string name);

    void openValue();
    void closeValue();

private:
    std::string name;
};

#endif // FAUCETCONTROL_H
