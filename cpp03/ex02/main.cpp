#include "FragTrap.hpp"

int main()
{
    FragTrap Clap("Rachid");
    FragTrap Trap("Racha");

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    Clap.highFivesGuys();
    return (0);
}
