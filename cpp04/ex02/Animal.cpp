#include "Animal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}
AAnimal::AAnimal(std::string &name) : type(name)
{
    std::cout << "AAnimal constructor called" << std::endl;
}
AAnimal::AAnimal(AAnimal &copy)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    this->type = copy.type;
}
AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}
AAnimal& AAnimal::operator=(AAnimal &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}
std::string AAnimal::getType(void) const
{
    return (this->type);
}

