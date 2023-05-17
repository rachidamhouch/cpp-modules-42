#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Hit_points(10), Energy_points(10), Attack_damage(0), name("ClapTrap"){}
ClapTrap::ClapTrap(int Hit_points, int Energy_points, int Attack_damage, std::string name):
    Hit_points(Hit_points), Energy_points(Energy_points), Attack_damage(Attack_damage, name(name)) {}
ClapTrap::ClapTrap(ClapTrap &Clap)
{
    this->nmae = Clap.name;
    this->Hit_points = Clap.Hit_points;
    this->Energy_points = Clap.Energy_points;
    this->Attack_damage = Clap.Attack_damage;
}
ClapTrap& ClapTrap::operator=(ClapTrap &Clap)
{
    if (this != &Clap)
    {
        this->nmae = Clap.name;
        this->Hit_points = Clap.Hit_points;
        this->Energy_points = Clap.Energy_points;
        this->Attack_damage = Clap.Attack_damage;
    }
    return (*this);
}
ClapTrap::~ClapTrap(){}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
	else if (Energy_points && Attack_damage)
	{
		std::cout << "ClapTrap" << name << " attacks " << target << " causing " << Attack_damage << " points of damage" << std::endl;
        Energy_points--;
    }
	else if (!Energy_points)
		std::cout << name << "Has no energy points to attack." << target << std::endl;
	else if(!Attack_damage)
		std::cout << name << "Has no attack damage points to attack." << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    Hit_points -= amount;
    if (Hit_points < 0)
        Hit_points = 0;
	if (Hit_points == 0)
		std::cout << "ClapTrap " << this->name << "is dead." << std::endl;	
	else
		std::cout << name << " lost " << amount << " damage points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
	else if (Energy_points)
	{
		std::cout << name << " repaired " << amount << " energy points." << std::endl;
        Energy_points--;
		Hit_points += amount;
    }
	else
		std::cout << name << "no energy points to repair." << std::endl;
}
