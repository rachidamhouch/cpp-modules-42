#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &Scav);
        FragTrap& operator=(FragTrap &Scav);
        void highFivesGuys(void);
};
#endif