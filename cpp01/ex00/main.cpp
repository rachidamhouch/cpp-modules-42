/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:25:08 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/18 20:55:19 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z1, *z2;

    z2 = newZombie("Rachid");
    z1.announce();
    z2->announce();
    randomChump("Amhouch");
    delete z2;
    return (0);
}
