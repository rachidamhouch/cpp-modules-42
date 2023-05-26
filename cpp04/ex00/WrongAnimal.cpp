#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string &name) : type(name)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = copy.type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}
std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal made a sound." << std::endl;
}
