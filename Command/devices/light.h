#ifndef LIGHT_H
#define LIGHT_H
#include <string>
#include <iostream>

class Light
{
public:
    Light(std::string &name);

    void on();
    void off();

private:
    std::string name;
};

#endif // LIGHT_H
