#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* m = new WrongAnimal();
    const WrongAnimal* n = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout<< "----------------------------------" << std::endl;
    std::cout << m->getType() << " " << std::endl;
    std::cout << n->getType() << " " << std::endl;
    m->makeSound();
    n->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    delete m;
    delete n;
    return 0;
}
