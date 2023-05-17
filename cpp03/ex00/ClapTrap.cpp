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