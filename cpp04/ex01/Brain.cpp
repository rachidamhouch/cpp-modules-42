#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "Default";
}

Brain::Brain(std::string ideas[100])
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[i];
}

Brain::Brain(const Brain *copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy->ideas[i];
}
Brain& Brain::operator=(const Brain *copy)
{
    if (this != copy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy->ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
std::string* Brain::getIdeas(void)
{
    return (ideas);
}
