/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:22:24 by ramhouch          #+#    #+#             */
/*   Updated: 2023/05/17 16:22:25 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int  fractional_bits = 8;
    public:
        Fixed();
	    Fixed (const Fixed &fixed);
        Fixed (const int value);
        Fixed (const float value);
	    ~Fixed();
	    Fixed&	operator=(const Fixed &fixed);
	    int		getRawBits(void) const;
	    void	setRawBits(int raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);
#endif