#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string &name);
        Animal(Animal &copy);
        Animal& operator=(Animal &copy);
        std::string getType(void) const;
};
#endif