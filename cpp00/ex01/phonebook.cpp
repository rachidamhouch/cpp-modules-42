/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:56:55 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 19:09:21 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->num = 0;
}
PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::get_fname(int i)
{
	return (this->contact[i].get_fname());
}

std::string PhoneBook::get_lname(int i)
{
	return (this->contact[i].get_lname());
}

std::string PhoneBook::get_nickname(int i)
{
	return (this->contact[i].get_nickname());
}

std::string PhoneBook::get_number(int i)
{
	return (this->contact[i].get_number());
}

std::string PhoneBook::get_darkest(int i)
{
	return (this->contact[i].get_darkest());
}

void PhoneBook::set_fname(std::string fname, int i)
{
	this->contact[i].set_fname(fname);
}

void PhoneBook::set_lname(std::string lname, int i)
{
	this->contact[i].set_lname(lname);
}

void PhoneBook::set_nickname(std::string nickname, int i)
{
	this->contact[i].set_nickname(nickname);
}

void PhoneBook::set_number(std::string number, int i)
{
	this->contact[i].set_number(number);
}

void PhoneBook::set_darkest(std::string darkest, int i)
{
	this->contact[i].set_darkest(darkest);
}
