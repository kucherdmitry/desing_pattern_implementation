#include "chocolateboiler.h"

ChocolateBoiler::ChocolateBoiler()
{
    empty = true;
    boiled = false;
}

ChocolateBoiler &ChocolateBoiler::getInstance()
{
    static ChocolateBoiler boiler;
    return boiler;
}

void ChocolateBoiler::fill()
{
    if(isEmpty())
    {
        empty = false;
        boiled = false;

        std::cout << "Filling...\n";
    }
}

void ChocolateBoiler::drain()
{
    if(!isEmpty() && isBoiled())
    {
        empty = true;

        std::cout << "Draining...\n";
    }
}

void ChocolateBoiler::boil()
{
    if(!isEmpty() && !isBoiled())
    {
        boiled = true;

        std::cout << "Boiling...\n";
    }
}

void ChocolateBoiler::getAddress()
{
    std::cout << this << "\n";
}

bool ChocolateBoiler::isEmpty()
{
    return empty;
}

bool ChocolateBoiler::isBoiled()
{
    return boiled;
}
