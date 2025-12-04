#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	std::cout << "[Brain] Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

const std::string& Brain::getIdeas(int i) const
{
	return (ideas[i]);
}

void Brain::setIdeas(int i, const std::string& value)
{
	ideas[i] = value;
	std::cout << value << std::endl;
	std::cout << ideas[i] << std::endl;
}
