/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 03:25:12 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/20 04:42:24 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl a;

	if (ac != 2)
	{
		std::cout << "./harlFilter <LEVEL>" << std::endl;
		return (1);
	}
	a.complain(av[1]);
	return (0);
}
