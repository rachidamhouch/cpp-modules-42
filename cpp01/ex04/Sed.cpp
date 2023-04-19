/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:30:57 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 06:23:08 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

FtSed::FtSed(std::string filename, std::string oldstring, std::string newstring) :
filename(filename), new_filename(filename + ".replace"),
oldstring(oldstring), newstring(newstring)
{
	this->infile.open(this->filename.c_str());
	if (!this->filename.length() || !this->oldstring.length()\
		|| !this->newstring.length() || !this->infile.good())
	{
		std::cout << "usage: ./Sed <filename> <oldstring> <newstring>" << std::endl;
		exit(1);
	}
	this->outfile.open(this->new_filename.c_str());
}

FtSed::~FtSed(void)
{
	this->infile.close();
	this->outfile.close();
}

void FtSed::replace(void)
{
	std::cout << "Strat replacing." << std::endl;
}
