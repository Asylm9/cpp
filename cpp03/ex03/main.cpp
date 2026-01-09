#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("Jacky");

    std::cout << "\n====== Stats" << std::endl;
    d.displayStat();

    std::cout << "\n====== Default Constructor" << std::endl;
    DiamondTrap d1;
    //d1.displayStat();

    std::cout << "\n====== Param Constructor" << std::endl;
    DiamondTrap d2("Georges");
    //d2.displayStat();

    std::cout << "\n====== WhoAmI" << std::endl;
    d2.whoAmI();
    
    std::cout << "\n====== Attack" << std::endl;
    d2.attack("Maurice");
    //d2.ClapTrap::attack("Maurice");
    
    std::cout << "\n====== Derived Methods" << std::endl;
    d2.highFivesGuys();
    d2.guardGate();
    
    std::cout << "\n====== Copy" << std::endl;
    DiamondTrap copy (d2);
    copy.whoAmI();
    
    std::cout << "\n====== Take Damage" << std::endl;
    d2.takeDamage(50);

    std::cout << "\n====== Be Repaired" << std::endl;
    d2.beRepaired(20);
    d2.displayStat();

    std::cout << "\n====== Destructors" << std::endl;
    return 0;
}
