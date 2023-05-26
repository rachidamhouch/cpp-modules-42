#ifndef WORONGCAT_HPP
# define WORONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(std::string &name);
        WrongCat(WrongCat &copy);
        WrongCat& operator=(WrongCat &copy);
        void makeSound() const;
};
#endif
