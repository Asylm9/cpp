#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "[WrongCat] default constructor called" << std::endl;
	type = "WrongCat";
}


WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "[WrongCat] copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] destructor constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "[WrongCat] copy assignment operator called" << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "The " << type << " meows" << std::endl;
}
