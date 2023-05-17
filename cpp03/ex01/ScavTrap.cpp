#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	name = "ScavTrap";
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &Scav)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	name = Scav.name;
	Hit_points = Scav.Hit_points;
	Energy_points = Scav.Energy_points;
	Attack_damage = Scav.Attack_damage;
}

ScavTrap& ScavTrap::operator=(ScavTrap &Scav)
{
	if (this != &Scav)
	{
		std::cout << "ScavTrap constructor called" << std::endl;
		name = Scav.name;
		Hit_points = Scav.Hit_points;
		Energy_points = Scav.Energy_points;
		Attack_damage = Scav.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
