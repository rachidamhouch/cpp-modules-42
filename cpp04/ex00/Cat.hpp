#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
    protected:

    public:
        Cat();
        ~Cat();
        Cat(std::string &name);
        Cat(Cat &copy);
        Cat& operator=(Cat &copy);
};
#endif
