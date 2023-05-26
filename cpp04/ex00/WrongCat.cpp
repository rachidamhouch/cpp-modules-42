#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}
WrongCat::WrongCat(std::string &name)
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = name;
}
WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = copy.type;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat Meow ..." << std::endl;
}
