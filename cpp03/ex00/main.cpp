#include "ClapTrap.hpp"

int	main()
{
	ClapTrap clap("Scar");

	clap.attack("Mufasa");

	clap.takeDamage(5);

	clap.beRepaired(4);

	clap.displayStat();

	for (int i = 0; i < 9; i++)
		clap.attack("Mufasa");

	clap.takeDamage(12);
	clap.attack("Ghost");

	clap.displayStat();

	return 0;
}