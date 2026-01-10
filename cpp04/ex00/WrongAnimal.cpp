#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "[WrongAnimal] default constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] destructor constructor called" << std::endl;
	
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "[WrongAnimal] copy assignment operator called" << std::endl;
	
	if (this != &rhs)
		type = rhs.type;
	
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "The " << type << " makes some random noises" << std::endl;
}
