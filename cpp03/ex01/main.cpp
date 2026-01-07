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
/* int main()
{
    std::cout << "=== Test 1: Creation ===" << std::endl;
    ScavTrap scav("Georges");
    
    std::cout << "\n=== Test 2: Attack ===" << std::endl;
    scav.attack("Gerard");
    
    std::cout << "\n=== Test 3: Take Damage ===" << std::endl;
    scav.takeDamage(30);  // Test de l'héritage
    
    std::cout << "\n=== Test 4: Repair ===" << std::endl;
    scav.beRepaired(20);  // Test de l'héritage
    
    std::cout << "\n=== Test 5: Guard Gate ===" << std::endl;
    scav.guardGate();
    
    std::cout << "\n=== Test 6: Copy ===" << std::endl;
    ScavTrap b = scav;
    b.attack("Junior");
    
    std::cout << "\n=== Test 7: Die and try actions ===" << std::endl;
    scav.takeDamage(200);
    scav.guardGate();  // Devrait afficher un message ou rien
    scav.attack("Someone");
    
    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
} */