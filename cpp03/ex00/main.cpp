/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:46:47 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/18 00:46:48 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Clap("Rachid");
    ClapTrap Trap("Racha");

    Clap.attack("Racha");
    Trap.takeDamage(5);
    Trap.beRepaired(5);
    Trap.attack("Rachid");
    Clap.takeDamage(10);
    return (0);
}