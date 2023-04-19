/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:30:57 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 04:46:49 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

FtSed::FtSed(std::string filename, std::string oldstring, std::string newstring) :
filename(filename), new_filename(filename + ".replace"),
oldstring(oldstring), newstring(newstring){}

FtSed::~FtSed(void)
{
	std::cout << "Done." << std::endl;
}

void FtSed::replace(void)
{
	std::cout << "Strat replacing." << std::endl;
}
