#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}
Cat::Cat(std::string &name)
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = name;
}
Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
Cat& Cat::operator=(Cat &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}
