#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        ~Cat();
        Cat(std::string &name);
        Cat(Cat &copy);
        Cat& operator=(Cat &copy);
        void makeSound() const;
};
#endif
