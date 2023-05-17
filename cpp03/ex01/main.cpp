#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Rachid", 10, 10, 5);
    ClapTrap Trap("Racha", 10, 10, 10);

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    return (0);
}