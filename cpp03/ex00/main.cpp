#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clapTrap("Scar");

	clapTrap.attack("Mufasa");
	clapTrap.takeDamage(5);
	//clapTrap.beRepaired(1);
	for (int i = 0; i < 10; i++)
	{
		clapTrap.displayStat();
		clapTrap.attack("Mufasa");
	}
	return 0;
}