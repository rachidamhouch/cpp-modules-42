/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 03:25:12 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/20 03:52:36 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl a;
	a.complain("info");
	a.complain("debug");
	a.complain("warning");
	a.complain("error");
	a.complain("Rachid");
	return (0);
}
