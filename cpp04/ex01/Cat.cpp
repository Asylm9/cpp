#include "Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << "[Cat] default constructor called" << std::endl;
	type = "Cat";
}


Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat] copy assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}


Brain*	Cat::getBrain() const
{
	return _brain;
}

void	Cat::makeSound() const
{
	std::cout << "The " << type << " meows" << std::endl;
}
