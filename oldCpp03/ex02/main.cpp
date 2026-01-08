#include "FragTrap.hpp"

#include "FragTrap.hpp"

int main()
{
	/* ### 3. **Note sur attack()** ℹ️
	FragTrap utilise la méthode `attack()` de ClapTrap (non surchargée).
	C'est **correct selon le sujet** qui ne demande pas de surcharge, contrairement à ScavTrap.

	Le message sera donc :
	{ClapTrap Georges attacks Gerard inflicting him 30 points of damage} */

    std::cout << "=== Test 1: Creation ===" << std::endl;
    FragTrap frag("Georges");
    
    std::cout << "\n=== Test 2: Display Stats ===" << std::endl;
    frag.displayStat();  // Vérifier HP:100, EP:100, AD:30
    
    std::cout << "\n=== Test 3: Attack ===" << std::endl;
    frag.attack("Gerard");
    
    std::cout << "\n=== Test 4: High Five ===" << std::endl;
    frag.highFivesGuys();
    
    std::cout << "\n=== Test 5: Take Damage ===" << std::endl;
    frag.takeDamage(50);
    
    std::cout << "\n=== Test 6: Repair ===" << std::endl;
    frag.beRepaired(30);
    
    std::cout << "\n=== Test 7: Copy Constructor ===" << std::endl;
    FragTrap b = frag;
    b.attack("Junior");
    b.highFivesGuys();
    
    std::cout << "\n=== Test 8: Die and try actions ===" << std::endl;
    frag.takeDamage(200);
    frag.highFivesGuys();  // Pas de message (mort)
    frag.attack("Someone");  // Ne peut pas attaquer
    
    std::cout << "\n=== Destruction ===" << std::endl;
    return 0;
} 