/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:29:39 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 06:22:57 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "usage: ./Sed <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}
	FtSed file(av[1], av[2], av[3]);
	file.replace();
	return (0);
}