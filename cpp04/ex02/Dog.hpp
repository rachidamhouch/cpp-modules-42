#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public AAnimal
{
    private:
        Brain* B;
    public:
        Dog();
        ~Dog();
        Dog(std::string &name);
        Dog(Dog &copy);
        Dog& operator=(Dog &copy);
        void makeSound() const;
};
#endif