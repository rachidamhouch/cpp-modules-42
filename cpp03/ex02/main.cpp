/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:47:28 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:47:29 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
