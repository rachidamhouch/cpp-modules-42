#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}
Dog::Dog(std::string &name)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = name;
}
Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
Dog& Dog::operator=(Dog &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Haw ..." << std::endl;
}
