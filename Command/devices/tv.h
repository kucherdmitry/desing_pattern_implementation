#ifndef TV_H
#define TV_H
#include <iostream>

class TV
{
public:
    TV(std::string name);

    void on();
    void off();
    void setInputChannel();
    void setVolume();

private:
    std::string name;
};

#endif // TV_H
