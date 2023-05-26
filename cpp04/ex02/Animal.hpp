#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(std::string &name);
        AAnimal(AAnimal &copy);
        AAnimal& operator=(AAnimal &copy);
        std::string getType(void) const;
        virtual void makeSound() const = 0;
};
#endif