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
/* int main()
{
    ClapTrap clap("Scar");
    
    // Test 1: Attack normal
    clap.attack("Mufasa");
    
    // Test 2: Prendre des dégâts
    clap.takeDamage(5);
    
    // Test 3: Se réparer
    clap.beRepaired(3);
    
    // Test 4: Épuiser l'énergie
    for (int i = 0; i < 9; i++)
        clap.attack("Mufasa");
    
    // Test 5: Attaquer sans énergie
    clap.attack("Mufasa");
    
    // Test 6: Mourir
    clap.takeDamage(20);
    clap.attack("Someone"); // Ne devrait pas pouvoir
    
    return 0;
} */