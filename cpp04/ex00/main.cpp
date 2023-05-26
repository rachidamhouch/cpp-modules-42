#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    delete i;
    delete j;
    return 0;
}
