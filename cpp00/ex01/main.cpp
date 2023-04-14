/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:02:03 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/14 18:41:08 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main()
{
	Contact test;
    test.set_fname("Rachid");
    test.set_lname("Amhouch");
    std::cout << test.get_fname() << " " << test.get_lname() << std::endl;
    return (0);
}
