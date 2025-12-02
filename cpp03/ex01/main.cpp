#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	ScavTrap scavTrap("Georges");
	ScavTrap b = scavTrap;

	scavTrap.attack("Gerard");
	b.attack("Junior");
	scavTrap.guardGate();

	return 0;
}