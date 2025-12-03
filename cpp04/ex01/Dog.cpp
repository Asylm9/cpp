#include "Dog.hpp"

Dog::Dog() : Animal(), type("Dog"), brain(new Brain())
{
	std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "[Dog] Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		type = rhs.type;
		*brain = *rhs.brain;
	}
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