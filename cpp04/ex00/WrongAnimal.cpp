#include "WrongAnimal.hpp"

	WrongAnimal::WrongAnimal() : type("WrongAnimal")
	{
		std::cout << "[WrongAnimal] Default constructor called" << std::endl;
	}

	WrongAnimal::WrongAnimal(const WrongAnimal& other)
	{
		std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
		*this = other;
	}

	WrongAnimal::~WrongAnimal()
	{
		std::cout << "[WrongAnimal] Destructor called" << std::endl;
	}

	WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
	{
		std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
		if (this != &rhs)
			type = rhs.type;
		return (*this);
	}

	const std::string& WrongAnimal::getType() const
	{
		return (type);
	}

	void WrongAnimal::makeSound()
	{
		std::cout << "The " << type << " makes some random noise" << std::endl;
	}
	