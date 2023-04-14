/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:56:55 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 22:34:47 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->num = 0;
	this->index = 0;
}
PhoneBook::~PhoneBook()
{
}

//geters

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

//seters
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

//tools
void PhoneBook::add()
{
	std::string input;
	if (this->num == 8)
		this->num = 0;
	input = "";
	while (input == "")
	{
		print("First name: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (input == "")
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_fname(input, this->num);
	}
	input = "";
	while (input == "")
	{
		print("Last name: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (input == "")
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_lname(input, this->num);
	}
	input = "";
	while (input == "")
	{
		print("Nickname: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (input == "")
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_nickname(input, this->num);
	}
	input = "";
	while (input == "")
	{
		print("Phone number: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (input == "")
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_number(input, this->num);
	}
	input = "";
	while (input == "")
	{
		print("Darkest secret: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (input == "")
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_darkest(input, this->num);
	}
	this->num += 1;
	if (this->index != 8)
		this->index = this->num;
}

void header()
{
	print("*********************************************", "YELLOW", 1);
	print("|", "YELLOW", 0);
	std::cout << std::setw(10) << "Index" ;
	print("|", "YELLOW", 0);
	std::cout << std::setw(10) << "First name";
	print("|", "YELLOW", 0);
	std::cout << std::setw(10) << "Last name";
	print("|", "YELLOW", 0);
	std::cout << std::setw(10) << "Nickname";
	print("|", "YELLOW", 1);
	print("*********************************************", "YELLOW", 1);
}

void PhoneBook::search()
{
	int	i;
	std::string input;
	
	if (!this->index)
	{
		print("PhoneBook is empty.", "RED", 1);
		return;
	}
	header();
	i = 0;
	while (i < this->index)
	{
		print("|", "YELLOW", 0);
		std::cout << std::setw(10) << i + 1;
		print("|", "YELLOW", 0);
		input = this->get_fname(i);
		if (input.length() > 10)
		{
			input.resize(9);
			input.append(1, '.');
		}
		std::cout << std::setw(10) << input;
		print("|", "YELLOW", 0);
		input = this->get_lname(i);
		if (input.length() > 10)
		{
			input.resize(9);
			input.append(1, '.');
		}
		std::cout << std::setw(10) << input;
		print("|", "YELLOW", 0);
		input = this->get_nickname(i);
		if (input.length() > 10)
		{
			input.resize(9);
			input.append(1, '.');
		}
		std::cout << std::setw(10) << input;
		print("|", "YELLOW", 1);
		i++;
	}
	print("*********************************************", "YELLOW", 1);
}
