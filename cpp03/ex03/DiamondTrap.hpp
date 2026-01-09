#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	std::string		_name;

	public:

	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& object);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& rhs);

	void	whoAmI();

	void 	displayStat();
};

#endif
