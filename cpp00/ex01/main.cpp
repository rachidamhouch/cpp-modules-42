/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:02:03 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 22:32:39 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print(std::string msg, std::string color, int endl)
{
	if (color == "RED")
		std::cout << RED;
	if (color == "GREEN")
		std::cout << GREEN;
	if (color == "YELLOW")
		std::cout << YELLOW;
	if (color == "BLUE")
		std::cout << BLUE;
	std::cout << msg;
	if (endl)
		std::cout << std::endl;
	std::cout << RESET;
}

int main()
{
	PhoneBook Phon;
    std::string input;

    print("Available commands: ADD - SEARCH - EXIT", "GREEN", 1);
    while (1)
    {
		print("~> ", "YELLOW", 0);
        std::getline(std::cin, input);
        if (input == "ADD")
			Phon.add();
        else if (input == "SEARCH")
			Phon.search();
		else if (input == "EXIT")
			return (0);
		else
			print("Invalid command.", "RED", 1);
    }
    return (0);
}
