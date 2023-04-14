/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:23:37 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 18:23:38 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
    private:
        std::string fname;
		std::string lname;
        std::string nickname;
        std::string number;
        std::string darkest;
    public:
		Contact();
		~Contact();

		void	set_fname(std::string fname);
		void	set_lname(std::string lname);
		void	set_nickname(std::string nickname);
		void	set_number(std::string number);
		void	set_darkest(std::string darkest);

		std::string get_fname();
		std::string get_lname();
		std::string get_nickname();
		std::string get_number();
		std::string get_darkest();
};
#endif
