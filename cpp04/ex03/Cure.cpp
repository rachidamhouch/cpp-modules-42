#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}
Cure::Cure(const std::string type)
{
    this->type = type;
}
Cure::Cure(const Cure &copy)
{
    type = copy.type;
}
Cure::~Cure(){}
Cure& Cure::operator=(const Cure &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}
Cure* Cure::clone() const
{
    return (new Cure(*this));
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}