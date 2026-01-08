#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Georges");

    std::cout << "\n====== Stats" << std::endl;
	scav.displayStat();

    std::cout << "\n====== Attack" << std::endl;
    scav.attack("Gerard");
    
    std::cout << "\n====== Take Damage" << std::endl;
    scav.takeDamage(300); 
    
    std::cout << "\n====== Be Repaired" << std::endl;
    scav.beRepaired(20);
    
    std::cout << "\n====== Guard Mode" << std::endl;
    scav.guardGate();
    
    std::cout << "\n====== Copy" << std::endl;
    ScavTrap copy = scav;
    copy.attack("Maurice");
    
    std::cout << "\n====== DEAD" << std::endl;
    scav.takeDamage(70);
    scav.guardGate();
    scav.attack("Someone");
    
/*     std::cout << "\n====== Stats" << std::endl;
	scav.displayStat();
	copy.displayStat(); */

    std::cout << "\n======" << std::endl;
    return 0;
}
