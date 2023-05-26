#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(std::string &name) : type(name)
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = copy.type;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}
Animal& Animal::operator=(Animal &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}
std::string Animal::getType(void) const
{
    return (this->type);
}
