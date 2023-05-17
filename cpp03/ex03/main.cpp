/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:56 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:57 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap Clap("Rachid");
    DiamondTrap Trap("Racha");

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    Clap.highFivesGuys();
    Clap.guardGate();
    Clap.whoAmI();
    return (0);
}
