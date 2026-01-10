#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "[AAnimal] default constructor called" << std::endl;
}


AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "[AAnimal] copy constructor called" << std::endl;
	*this = other;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] destructor called" << std::endl;
	
}

AAnimal& AAnimal::operator=(const AAnimal& rhs)
{
	std::cout << "[AAnimal] copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		type = rhs.type;
	
	return (*this);
}

std::string	AAnimal::getType() const
{
	return type;
}

