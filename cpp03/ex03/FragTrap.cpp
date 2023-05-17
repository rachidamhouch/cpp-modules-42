/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:51 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:52 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	name = "FragTrap";
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &Scav)
{
	std::cout << "FragTrap constructor called" << std::endl;
	name = Scav.name;
	Hit_points = Scav.Hit_points;
	Energy_points = Scav.Energy_points;
	Attack_damage = Scav.Attack_damage;
}

FragTrap& FragTrap::operator=(FragTrap &Scav)
{
	if (this != &Scav)
	{
		std::cout << "FragTrap constructor called" << std::endl;
		name = Scav.name;
		Hit_points = Scav.Hit_points;
		Energy_points = Scav.Energy_points;
		Attack_damage = Scav.Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << ": this is a positive High fives "<< std::endl;
}
