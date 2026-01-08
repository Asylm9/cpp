 #ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
	public:
	
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(FragTrap const& object);

	~FragTrap();

	FragTrap&  operator=(FragTrap const& rhs);

	void highFivesGuys(void);
};

#endif