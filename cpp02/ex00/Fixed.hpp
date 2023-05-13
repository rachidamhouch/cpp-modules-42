#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int value;
        static const int  fractional_bits = 8;
    public:
        Fixed();
	    Fixed (Fixed &fixed);
	    ~Fixed();
	    Fixed&	operator=(Fixed &fixed);
	    int		getRawBits(void) const;
	    void	setRawBits(int raw);
};
#endif