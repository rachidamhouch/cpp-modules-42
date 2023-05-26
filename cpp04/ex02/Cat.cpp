#include "Cat.hpp"

Cat::Cat() : B(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}
Cat::Cat(std::string &name) : B(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = name;
}
Cat::Cat(Cat &copy) : B(new Brain(copy.B))
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete B;
}
Cat& Cat::operator=(Cat &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
        this->B = copy.B;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Meow ..." << std::endl;
}