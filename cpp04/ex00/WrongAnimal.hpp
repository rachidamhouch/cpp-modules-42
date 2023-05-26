#ifndef WORNGANIMAL_HPP
# define WORNGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(std::string &name);
        WrongAnimal(WrongAnimal &copy);
        WrongAnimal& operator=(WrongAnimal &copy);
        std::string getType(void) const;
        virtual void makeSound() const;
};
#endif