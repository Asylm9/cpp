#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Georges");
    
    std::cout << "\n====== Stats" << std::endl;
    frag.displayStat();
    
    std::cout << "\n====== Attack" << std::endl;
    frag.attack("Gerard");

    std::cout << "\n====== Take Damage" << std::endl;
    frag.takeDamage(50);
    
    std::cout << "\n====== Be Repaired" << std::endl;
    frag.beRepaired(30);
    
    std::cout << "\n====== High Five" << std::endl;
    frag.highFivesGuys();
    
    std::cout << "\n====== Copy" << std::endl;
    FragTrap copy = frag;
    copy.attack("Junior");
    copy.highFivesGuys();
    
    std::cout << "\n====== DEAD" << std::endl;
    frag.takeDamage(200);
    frag.highFivesGuys();
    frag.attack("Someone");
    
    std::cout << "\n====== Stats" << std::endl;
	frag.displayStat();
	copy.displayStat();

    std::cout << "\n======" << std::endl;
    return 0;
}
