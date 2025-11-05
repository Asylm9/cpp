#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& object) : _fixedPointValue(object._fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractBits)
{
	std::cout << "INT to FixedPoint constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedPointValue((int)roundf(f * (1 << _fractBits))) // 1 << 2^n = 2 ^ 8 = 256
{
	std::cout << "FLOAT to FixedPoint constructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_fixedPointValue = rhs._fixedPointValue;
	return (*this); 
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _fractBits));
}

int Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractBits);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}


/* Retourne reference vers flux de sortie + permet le chainage d'operations
*/
std::ostream& operator<<(std::ostream& ostream, Fixed const& object)
{
	ostream << object.toFloat();
	return (ostream); 
}