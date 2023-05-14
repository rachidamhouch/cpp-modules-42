#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
}
Fixed::Fixed(const Fixed &fixed)
{
    this->value = fixed.value;
}
Fixed::~Fixed()
{
}
Fixed::Fixed(const int value)
{
   this->value = value << this->fractional_bits;
}
Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << this->fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    if (this != &fixed)
        this->value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (this->value);
}

void Fixed::setRawBits(int raw)
{
    this->value = raw;
}

int Fixed::toInt() const
{
    return (this->value >> this->fractional_bits);
}

float Fixed::toFloat() const
{
    return ((float)this->value / (1 << this->fractional_bits));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->value > fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->value >= fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->value < fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->value <= fixed.getRawBits());
}
bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->value != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed a;
    a.setRawBits(this->value + fixed.getRawBits());
    return (a);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed a;
    a.setRawBits(this->value - fixed.getRawBits());
    return (a);
}
Fixed Fixed::operator-(void) const
{
    Fixed a;
    a.setRawBits((this->value) * -1);
    return (a);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed a;
    a.setRawBits((this->value * fixed.getRawBits()) >> 8);
    return (a);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed a;
    a.setRawBits((this->value / fixed.getRawBits()) << 8);
    return (a);
}

Fixed Fixed::operator++(void)
{
    (this->value)++;
    return (*this);
}

Fixed Fixed::operator--(void)
{
    (this->value)--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    (this->value)++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    (this->value)--;
    return (tmp);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}
