#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        AMateria *T[4];
        std::string name;
    public:
        Character();
        Character(std::string name);
        Character(Character &copy);
        Character& operator=(Character &copy);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif