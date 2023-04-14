/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:43:09 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 22:29:50 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define RESET "\033[1;0m"
void	print(std::string msg, std::string color, int endl);

class PhoneBook
{
    private:
        Contact contact[8];
        int     num;
		int		index;
    public:
        PhoneBook();
        ~PhoneBook();
        void    set_fname(std::string fname, int i);
		void    set_lname(std::string lname, int i);
		void    set_nickname(std::string nickname, int i);
		void    set_number(std::string number, int i);
		void    set_darkest(std::string darkest, int i);
		std::string get_fname(int i);
		std::string get_lname(int i);
		std::string get_nickname(int i);
		std::string get_number(int i);
		std::string get_darkest(int i);
		void	add();
		void	search();
};
#endif