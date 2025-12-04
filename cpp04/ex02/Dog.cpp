#include "Dog.hpp"

Dog::Dog() : AAnimal(), brain(new Brain())
{
	std::cout << "[Dog] Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
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
		AAnimal::operator=(rhs);
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

const std::string& Dog::getType() const
{
	return (type);
}

const Brain* Dog::getBrain() const
{
	return (brain);
}

Brain* Dog::setBrain()
{
	return (brain);
}

void Dog::makeSound()
{
	std::cout << "The " << type << " barks woof woof" << std::endl;
}