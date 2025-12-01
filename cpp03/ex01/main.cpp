#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main()
{
	ScavTrap scavTrap("Georges");

	scavTrap.attack("Gerard");
	scavTrap.guardGate();

	return 0;
}