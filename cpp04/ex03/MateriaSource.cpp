#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        T[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
        delete T[i];
    for (int i = 0; i < 4; i++)
        T[i] = copy.T[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
    if (this != &copy)
    {
        for (int i = 0; i < 4; i++)
            delete T[i];
        for (int i = 0; i < 4; i++)
            T[i] = copy.T[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete T[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!T[i])
        {
            T[i] = m;
            return ;
        }
    }
    std::cout << "NO place to add another MateriaSource." << std::endl;
}

AMateria*    MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->T[i] && this->T[i]->getType() == type)
            return (this->T[i]->clone());
    }
    return (NULL);
}
