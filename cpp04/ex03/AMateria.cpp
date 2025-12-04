#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "[AMateria] Default constructor called" << std::endl;
	type = "AMateria";
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "[AMateria] Copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] Destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	std::cout << "[AMateria] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		*this = rhs;
	return (*this);
}