/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 03:25:21 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/20 04:34:56 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}
void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
	void (Harl::*func[]) (void) = {
	&Harl::debug,
	&Harl::info,
	&Harl::warning,
	&Harl::error
	};
	std::string levels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	int	i(0);
	while (i < 4)
	{
		if (levels[i] == level)
		{
			(this->*func[i])();
			return;
		}
		i++;
	}
	std::cout << "NOT FOUND" << std::endl;
}
