#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& object);
	~FragTrap();

	FragTrap& operator=(const FragTrap& rhs);

	void	highFivesGuys();

};

#endif
