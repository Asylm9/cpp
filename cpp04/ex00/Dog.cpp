#include "Dog.hpp"

	Dog::Dog() : Animal()
	{
		std::cout << "[Dog] Default constructor called" << std::endl;
		type = "Dog";
	}

	Dog::Dog(const Dog& other) : Animal(other)
	{
		std::cout << "[Dog] Copy constructor called" << std::endl;
	}

	Dog::~Dog()
	{
		std::cout << "[Dog] Destructor called" << std::endl;
	}

	Dog& Dog::operator=(const Dog& rhs)
	{
		std::cout << "[Dog] Copy assignment operator called" << std::endl;
		if (this != &rhs)
			Animal::operator=(rhs);
		return (*this);
	}

	const std::string& Dog::getType() const
	{
		return (type);
	}

	void Dog::makeSound()
	{
		std::cout << "The " << type << " barks woof woof" << std::endl;
	}