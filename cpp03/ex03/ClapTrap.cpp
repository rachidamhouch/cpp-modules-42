/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:37 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:38 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) :
    name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap &Clap)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = Clap.name;
    this->Hit_points = Clap.Hit_points;
    this->Energy_points = Clap.Energy_points;
    this->Attack_damage = Clap.Attack_damage;
}
ClapTrap& ClapTrap::operator=(ClapTrap &Clap)
{
    std::cout << "ClapTrap overloading assignment operator called" << std::endl;
    if (this != &Clap)
    {
        this->name = Clap.name;
        this->Hit_points = Clap.Hit_points;
        this->Energy_points = Clap.Energy_points;
        this->Attack_damage = Clap.Attack_damage;
    }
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
	else if (Energy_points && Attack_damage)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
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
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;	
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
