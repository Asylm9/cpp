#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "[Dog] default constructor called" << std::endl;
	type = "Dog";
}


Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	std::cout << "[Dog] copy assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The " << type << " barks woof woof" << std::endl;
}
