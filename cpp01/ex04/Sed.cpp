/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:30:57 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 04:02:42 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

FtSed::FtSed(std::string filename, std::string oldstring, std::string newstring) :
filename(filename), oldstring(oldstring), newstring(newstring)
{
	this->new_filename = filename + ".replace";
}

FtSed::~FtSed(void)
{
	std::cout << "Done." << std::endl;
}

void FtSed::replace(void)
{
	std::cout << "Strat replacing." << std::endl;
}
