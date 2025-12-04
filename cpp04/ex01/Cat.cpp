#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())	
{
	std::cout << "[Cat] Default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat] Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete brain;
		brain = new Brain(*rhs.brain);
	}
	return (*this);
}

const std::string& Cat::getType() const
{
	return (type);
}

const Brain* Cat::getBrain() const
{
	return (brain);
}

void Cat::makeSound()
{
	std::cout << "The " << type << " meows" << std::endl;
}