/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:44 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:45 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap constructor called." << std::endl;
    name = "DiamondTrap";
    ClapTrap::name = name + "_clap_name";
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const std::string &name)
{
    std::cout << "DiamondTrap constructor called." << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
{
    std::cout << "DiamondTrap constructor called." << std::endl;
    this->name = diamondTrap.name;
    ClapTrap::name = diamondTrap.name + "_clap_name";;
    this->Hit_points = diamondTrap.Hit_points;
    this->Energy_points = diamondTrap.Energy_points;
    this->Attack_damage = diamondTrap.Attack_damage;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap &Scav)
{
    std::cout << "DiamondTrap overloading assignment operator called." << std::endl;
    this->name = Scav.name;
    ClapTrap::name = Scav.name + "_clap_name";;
    this->Hit_points = Scav.Hit_points;
    this->Energy_points = Scav.Energy_points;
    this->Attack_damage = Scav.Attack_damage;
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My name: " << name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
