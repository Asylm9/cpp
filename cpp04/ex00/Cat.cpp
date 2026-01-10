#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "[Cat] default constructor called" << std::endl;
	type = "Cat";
}


Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	std::cout << "[Cat] copy assignment operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The " << type << " meows" << std::endl;
}
