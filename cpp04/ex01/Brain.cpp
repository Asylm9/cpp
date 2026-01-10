#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] default constructor called" << std::endl;
}


Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
	
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "[Brain] copy assignment operator called" << std::endl;
	
	if (this != &rhs)
	{
		for (size_t i = 0; i < SIZE; i++)
			_ideas[i] = rhs._ideas[i];
	}
	
	return (*this);
}

std::string	Brain::getIdeas() const
{
	return _ideas[0];
}

void Brain::setIdeas(std::string value, int i)
{
	if (i < 0)
		i = 0;
	_ideas[i] = value;
}

