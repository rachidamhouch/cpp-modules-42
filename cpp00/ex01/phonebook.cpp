/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:56:55 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/15 00:29:54 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int check(std::string input)
{
	int i = 0;

	if (input[i] == '+')
		i++;
	while (input[i])
	{
		if (input[i] > '9' || input[i] < '0')
			return (1);
		i++;
	}
	return (0);
}
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

int is_valid(std::string input)
{
	int i = 0;

	while (input[i])
	{
		if (input[i] != ' ' && input[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}
//tools
void PhoneBook::add()
{
	std::string input;
	if (this->num == 8)
		this->num = 0;
	input = "";
	while (is_valid(input))
	{
		print("First name: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (is_valid(input))
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_fname(input, this->num);
	}
	input = "";
	while (is_valid(input))
	{
		print("Last name: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (is_valid(input))
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_lname(input, this->num);
	}
	input = "";
	while (is_valid(input))
	{
		print("Nickname: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (is_valid(input))
			print("A saved contact can’t have empty fields.", "RED", 1);
		else
			this->set_nickname(input, this->num);
	}
	input = "";
	while (is_valid(input))
	{
		print("Phone number: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (is_valid(input))
			print("A saved contact can’t have empty fields.", "RED", 1);
		else if (check(input))
		{
			print("Numeric input required", "RED", 1);
			input = "";
		}
		else
			this->set_number(input, this->num);
	}
	input = "";
	while (is_valid(input))
	{
		print("Darkest secret: ", "BLUE", 0);
		std::getline(std::cin, input);
		if (std::cin.eof())
			return;
		if (is_valid(input))
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

int	ft_atoi(std::string str)
{
	int	i;

	i = 0;
	if (!str.length())
		return (-1);
	if (str[i] == '+')
		i++;
	if (!str.length())
	{
		print("Invalid input.", "RED", 1);
		return (-1);
	}
	if (str[i] >= '0' && str[i] <= '9')
		return (str[i] - '0');
	return (-1);
}

void PhoneBook::search()
{
	int	i;
	std::string input;
	int	index;
	
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
	print("INDEX: ", "BLUE", 0);
	std::getline(std::cin, input);
	index = ft_atoi(input);
	if (index == -1)
		return;
	if (index < 1 || index > this->index)
		print("The index is out of range.", "RED", 1);
	else
	{
		std::cout << "First name: "<< this->get_fname(index - 1) << std::endl;
		std::cout << "Last name: "<< this->get_lname(index - 1) << std::endl;
		std::cout << "Nickname: "<< this->get_nickname(index - 1) << std::endl;
		std::cout << "Phone numbe: "<< this->get_number(index - 1) << std::endl;
		std::cout << "Darkest secret: "<< this->get_darkest(index - 1) << std::endl;
	}
}
