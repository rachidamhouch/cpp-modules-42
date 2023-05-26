#include "Dog.hpp"

Dog::Dog() : B(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}
Dog::Dog(std::string &name) : B(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = name;
}
Dog::Dog(Dog &copy) : B(new Brain(copy.B))
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete B;
}
Dog& Dog::operator=(Dog &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        this->B = copy.B;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Haw ..." << std::endl;
}
