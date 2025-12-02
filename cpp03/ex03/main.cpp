#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap derived("diamond");
	//DiamondTrap derived;

	derived.highFivesGuys();
	derived.guardGate();

	derived.attack("TEST");

	derived.whoAmI();

	return 0 ;
}

/* int	main()
{
	FragTrap FragTrap("Georges");

	FragTrap.attack("Gerard");
	FragTrap.highFivesGuys();

	return 0;
} */