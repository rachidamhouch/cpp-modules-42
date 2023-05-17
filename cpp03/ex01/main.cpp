#include "ScavTrap.hpp"

int main()
{
    ScavTrap Clap("Rachid");
    ScavTrap Trap("Racha");

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    Clap.guardGate();
    return (0);
}