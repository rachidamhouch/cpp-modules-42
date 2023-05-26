#include "AMateria.hpp"

AMateria::AMateria() : type("Default"){}
AMateria::AMateria(std::string const & type) : type(type){}
AMateria::AMateria(const AMateria &copy) : type(copy.type){}
AMateria::~AMateria(){}
AMateria& AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
        type = copy.type;
    return (*this);
}
std::string const & AMateria::getType() const
{
    return (type);
}
void AMateria::use(ICharacter& target)
{
    std::cout << "is doing an unkown action on " << target.getName() << std::endl;
}
