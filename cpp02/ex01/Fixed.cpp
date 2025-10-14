#include "Fixed.hpp"

const int fractBits = 8;

Fixed::Fixed(void) : _fixedPointValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& object)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = object.getRawBits();
}

Fixed&  Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return(*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}