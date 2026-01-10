#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "[Ice] Default constructor called" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "[Ice] Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "[Ice] Destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& rhs)
{
	std::cout << "[Ice] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}