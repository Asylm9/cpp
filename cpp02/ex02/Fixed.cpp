#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& object) : _fixedPointValue(object._fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&  Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_fixedPointValue = rhs._fixedPointValue;
	return (*this); 
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractBits)
{
	std::cout << "INT to FixedPoint constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedPointValue(roundf(f * (1 << _fractBits)))
{
	std::cout << "FLOAT to FixedPoint constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPointValue) / (1 << _fractBits));
}

int Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractBits);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

/* overloaded operators */

/* arithmetic operators */
Fixed  Fixed::operator+(Fixed const& rhs) const
{
	Fixed fixed;
	fixed.setRawBits(this->_fixedPointValue + rhs._fixedPointValue);
	return (fixed);
}

Fixed  Fixed::operator-(Fixed const& rhs) const
{
	Fixed result;
	result.setRawBits(this->_fixedPointValue - rhs._fixedPointValue);
	return (result);
}

Fixed  Fixed::operator*(Fixed const& rhs) const
{
	Fixed result;
	result.setRawBits(this->_fixedPointValue * (rhs._fixedPointValue) >> _fractBits);
	return (result);
}

Fixed  Fixed::operator/(Fixed const& rhs) const
{
	Fixed result;
	if (rhs._fixedPointValue != 0)
		result.setRawBits((this->_fixedPointValue << _fractBits) / rhs._fixedPointValue);
	else
	{
		std::cerr << "Error: Division by 0" << std::endl;
		result.setRawBits(-1);
	}
	return (result);
}

/* comparison operators */
bool  Fixed::operator>(Fixed const& rhs) const
{
	return (this->_fixedPointValue > rhs._fixedPointValue);
}
bool  Fixed::operator<(Fixed const& rhs) const
{
	return (this->_fixedPointValue < rhs._fixedPointValue);
}
bool  Fixed::operator==(Fixed const& rhs) const
{
	return (this->_fixedPointValue == rhs._fixedPointValue);
}
bool  Fixed::operator!=(Fixed const& rhs) const
{
	return (this->_fixedPointValue != rhs._fixedPointValue);
}
bool  Fixed::operator>=(Fixed const& rhs) const
{
	return (this->_fixedPointValue >= rhs._fixedPointValue);
}
bool  Fixed::operator<=(Fixed const& rhs) const
{
	return (this->_fixedPointValue <= rhs._fixedPointValue);
}

/* increment/decrement operators */
Fixed&  Fixed::operator++()
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed result;
	result._fixedPointValue = this->_fixedPointValue++;
	return (result);
}

Fixed&  Fixed::operator--()
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed  Fixed::operator--(int)
{
	Fixed result;
	result._fixedPointValue = this->_fixedPointValue--;
	return (result);
}

/* Min/Max */
Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	return (x.getRawBits() < y.getRawBits() ? x : y);
}

const Fixed& Fixed::min(Fixed const& x, Fixed const& y)
{
	return (x.getRawBits() < y.getRawBits() ? x : y);
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	return (x.getRawBits() > y.getRawBits() ? x : y);
}

const Fixed& Fixed::max(Fixed const& x, Fixed const& y)
{
	return (x.getRawBits() > y.getRawBits() ? x : y);
}

/* Non-member function */
std::ostream& operator<<(std::ostream& ostream, Fixed const& object)
{
	ostream << object.toFloat();
	return (ostream); 
}