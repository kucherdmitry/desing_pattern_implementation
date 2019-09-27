#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H

#include <iostream>

class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;

    ChocolateBoiler();
    ~ChocolateBoiler() = default;
    ChocolateBoiler(ChocolateBoiler const&) = delete;
    ChocolateBoiler& operator= (ChocolateBoiler const&) = delete;

public:
    static ChocolateBoiler& getInstance();

    void fill();
    void drain();
    void boil();
    void getAddress();

    bool isEmpty();
    bool isBoiled();
};

#endif // CHOCOLATEBOILER_H
