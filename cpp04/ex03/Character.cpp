#include "Character.hpp"

Character::Character()
{
    name = "Default";
    for (int i = 0; i < 4; i++)
        T[i] = NULL;
}

Character::Character(const std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        T[i] = NULL;
}

Character::Character(const Character &copy)
{
    this->name = copy.name;
    for (int i = 0; i < 4; i++)
        delete T[i];
    for (int i = 0; i < 4; i++)
        T[i] = copy.T[i];
}

Character& Character::operator=(const Character &copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
        for (int i = 0; i < 4; i++)
            delete T[i];
        for (int i = 0; i < 4; i++)
            T[i] = copy.T[i];
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete T[i];
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!T[i])
        {
            T[i] = m;
            return ;
        }
    }
    std::cout << "NO place to add another Materia." << std::endl;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && !T[idx])
    {
        delete T[idx];
        T[idx] = NULL;
        return ;
    }
    std::cout << "No Materia in this idx." << std::endl; 
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && T[idx])
    {
        T[idx]->use(target);
        return ;
    }
    std::cout << "No Materia in this idx." << std::endl; 
}
