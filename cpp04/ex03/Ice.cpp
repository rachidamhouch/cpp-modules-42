#include "Ice.hpp"

Ice::Ice()
{
    type = "default";
}
Ice::Ice(const std::string type)
{
    this->type = type;
}
Ice::Ice(const Ice &copy)
{
    type = copy.type;
}
Ice::~Ice(){}
Ice& Ice::operator=(const Ice &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}
Ice* Ice::clone() const
{
    return (new Ice(*this));
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
