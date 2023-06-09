/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:00:43 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/18 21:44:49 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zs;

	zs = new Zombie[N];
	while (--HumanA.cppN >= 0)
	{
		zs[N].set_name(name);
		zs[N].announce();
	}
	return (zs);
}
