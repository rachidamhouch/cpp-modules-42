/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:04 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:05 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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