#include "iquack.h"

IQuack::IQuack()
{
    cout << "Construct interface IQuack\n";
}

IQuack::~IQuack()
{
    cout << "Destruct interface IQuack\n";
}

Quack::Quack()
{
    cout << "Construct behavior Quack\n";
}

Quack::~Quack()
{
    cout << "Destruct behavior Quack\n";
}

void Quack::makeSound()
{
    cout << "I'm quacking!\n";
}

Squeek::Squeek()
{
    cout << "Construct behavior Squeek\n";
}

Squeek::~Squeek()
{
    cout << "Destruct behavior Squeek\n";
}

void Squeek::makeSound()
{
    cout << " I'm squeeking!\n";
}
