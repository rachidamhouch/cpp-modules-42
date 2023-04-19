/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 03:31:05 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/19 06:16:27 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP
#include <iostream>
#include <fstream>
#include <stdlib.h>
class FtSed
{
	private:
		std::string filename;
		std::string new_filename;
		std::string	oldstring;
		std::string newstring;
		std::ofstream outfile;
		std::ifstream infile;
	public:
		FtSed(std::string filename, std::string oldstring, std::string newstring);
		~FtSed(void);
		void replace(void);
};
#endif