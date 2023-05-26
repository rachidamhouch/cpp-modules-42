#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    Animal *animals[4];

    for(int i = 0; i < 4; i++)
    {
        if (i < 2)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    for(int i=0; i<4; i++)
        delete animals[i];
}
