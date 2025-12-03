#include "Cat.hpp"

	Cat::Cat() : Animal(), type("Cat")
	{
		std::cout << "[Cat] Default constructor called" << std::endl;
	}

	Cat::Cat(const Cat& other) : Animal(other)
	{
		std::cout << "[Cat] Copy constructor called" << std::endl;
		*this = other;
	}

	Cat::~Cat()
	{
		std::cout << "[Cat] Destructor called" << std::endl;
	}

	Cat& Cat::operator=(const Cat& rhs)
	{
		std::cout << "[Cat] Copy assignment operator called" << std::endl;
		if (this != &rhs)
			type = rhs.type;
		return (*this);
	}

	const std::string& Cat::getType() const
	{
		return (type);
	}

	void Cat::makeSound()
	{
		std::cout << "The " << type << " meows" << std::endl;
	}