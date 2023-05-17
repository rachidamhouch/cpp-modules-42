#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &Scav);
        ScavTrap& operator=(ScavTrap &Scav);
        void guardGate(void);
};
#endif