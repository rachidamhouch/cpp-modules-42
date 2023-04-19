/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:30:57 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 21:25:53 by ramhouch         ###   ########.fr       */
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
	std::string line;
	size_t	pos;

	while (std::getline(this->infile, line))
	{
		pos = line.find(this->oldstring);
		while (pos != std::string::npos)
		{
			this->outfile << line.substr(0, pos);
			this->outfile << this->newstring;
			line = line.substr(pos + this->oldstring.length());
			pos = line.find(this->oldstring);
		}
		this->outfile << line;
		if (!this->infile.eof())
			this->outfile << std::endl;
	}
}
