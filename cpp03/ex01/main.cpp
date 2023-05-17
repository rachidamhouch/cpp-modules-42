#include "ScavTrap.hpp"

int main()
{
    ClapTrap Clap("Rachid");
    ClapTrap Trap("Racha");

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    return (0);
}