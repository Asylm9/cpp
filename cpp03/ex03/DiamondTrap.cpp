#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;

	_hitPoints(FragTrap);
;	_energyPoints = 50;
	_attackDamage = 20;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

DiamondTrap::DiamondTrap(DiamondTrap const& object) : ClapTrap(object)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap&  DiamondTrap::operator=(DiamondTrap const& rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this); 
}

void DiamondTrap::attack(const std::string& target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "{DiamondTrap "<< _name << " has left this world}" << std::endl;
		else
			std::cout << "{DiamondTrap "<< _name << " has not enough energy to attack}" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "{DiamondTrap " << _name << " attacks " << target << " causing him " << _attackDamage << " points of damage}" << std::endl;
}

void DiamondTrap::guardGate()
{
	std::cout << "{DiamondTrap "<< _name << " is in Gate keeper mode}" << std::endl;

}


