#include "Animal.hpp"

	Animal::Animal() : type("Animal")
	{
		std::cout << "[Animal] Default constructor called" << std::endl;
	}

	Animal::Animal(const Animal& other)
	{
		std::cout << "[Animal] Copy constructor called" << std::endl;
		*this = other;
	}

	Animal::~Animal()
	{
		std::cout << "[Animal] Destructor called" << std::endl;
	}

	Animal& Animal::operator=(const Animal& rhs)
	{
		std::cout << "[Animal] Copy assignment operator called" << std::endl;
		if (this != &rhs)
			type = rhs.type;
		return (*this);
	}

	const std::string& Animal::getType() const
	{
		return (type);
	}

	void Animal::makeSound()
	{
		std::cout << "The " << type << " makes some random noises" << std::endl;
	}
	