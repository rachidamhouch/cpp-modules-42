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