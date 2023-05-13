#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.value;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
   this->value = value << this->fractional_bits;
}
Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << this->fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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
