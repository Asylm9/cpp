#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("Test");
    d.displayStat(); //hardocder valeurs pour eviter ecrasement ? 

    std::cout << "=== Test 1: Default Constructor ===" << std::endl;
    DiamondTrap d1;
    
    std::cout << "\n=== Test 2: Parameterized Constructor ===" << std::endl;
    DiamondTrap d2("Georges");
    
    std::cout << "\n=== Test 3: Display Stats ===" << std::endl;
    d2.displayStat();  // Devrait montrer HP:100, EP:50, AD:30
    
    std::cout << "\n=== Test 4: whoAmI ===" << std::endl;
    d2.whoAmI();  // Georges et Georges_clap_name
    
    std::cout << "\n=== Test 5: Attack (ScavTrap) ===" << std::endl;
    d2.attack("Bjorn");  // Devrait dire "ScavTrap"
    
    std::cout << "\n=== Test 6: Inherited Functions ===" << std::endl;
    d2.highFivesGuys();  // De FragTrap
    d2.guardGate();      // De ScavTrap
    
    std::cout << "\n=== Test 7: Copy Constructor ===" << std::endl;
    DiamondTrap d3 = d2;
    d3.whoAmI();
    
    std::cout << "\n=== Test 8: Take Damage & Repair ===" << std::endl;
    d2.takeDamage(50);
    d2.beRepaired(20);
    d2.displayStat();
    
    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
}