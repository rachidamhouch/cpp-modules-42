/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:43:09 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 18:55:18 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
        int     num;
    public:
        PhoneBook();
        ~PhoneBook();
        void    set_num(int i);
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
};
#endif