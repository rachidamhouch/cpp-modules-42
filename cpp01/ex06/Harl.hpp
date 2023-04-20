/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 03:25:04 by ramhouch          #+#    #+#             */
/*   Updated: 2023/04/20 04:38:00 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP 
#define HARL_HPP
#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};
#endif