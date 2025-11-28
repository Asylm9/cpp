#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& object) : _fixedPointValue(object.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
	/* good practice, si bien compris :v : utiliser liste d'initioalisation et non operateur d'assignation lorsque object est en train d'etre cree */
	//*this = object;
}

Fixed&  Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	//& car this est un pointeur vers l'instance courante et rhs un reference de le l'objet a copier
	if (this != &rhs)
		_fixedPointValue = rhs.getRawBits();
	return (*this); //renvoyer une reference vers l'instance <3
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

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}