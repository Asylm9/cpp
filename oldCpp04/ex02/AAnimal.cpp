#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
	*this = other;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "[AAnimal] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		type = rhs.type;
	return (*this);
}

const std::string& AAnimal::getType() const
{
	return (type);
}

