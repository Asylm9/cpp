 #ifndef DIAMONTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:

	std::string _name;

	public:
	
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(DiamondTrap const& object);

	~DiamondTrap();

	DiamondTrap&  operator=(DiamondTrap const& rhs);

	void attack(const std::string& target);
	void guardGate();

};

#endif