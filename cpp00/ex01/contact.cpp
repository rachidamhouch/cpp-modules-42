/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:23:34 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 18:36:40 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	this->fname = "";
	this->lname = "";
	this->nickname = "";
	this->number = "";
	this->darkest = "";
}

Contact::~Contact()
{
}
//geters
std::string Contact::get_fname()
{
	return (this->fname);
}

std::string Contact::get_lname()
{
	return (this->lname);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_number()
{
	return (this->number);
}

std::string Contact::get_darkest()
{
	return (this->darkest);
}

//seters
void Contact::set_fname(std::string fname)
{
	this->fname = fname;
}

void Contact::set_lname(std::string lname)
{
	this->lname = lname;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
	this->number = number;
}

void Contact::set_darkest(std::string darkest)
{
	this->darkest = darkest;
}
