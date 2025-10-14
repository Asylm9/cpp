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
//fractBits: Identique pour tous. Quand un membre est static, il n’appartient pas a une instance 'this' mais a la classe elle-meme.
//Et quand il est en plus const, sa valeur est fixee une fois pour toutes à la compilation.
//si fractBits n'etait pas static, chaque objet aurait sa propre copie de fractBits (alors que sont contenu serait identique)
//fractBits n’appartient plus à l’objet, mais a la classe entiere.
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