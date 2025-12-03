#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), _name("default_diamond")
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor called" << std::endl;

	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const& object) : ClapTrap(object), ScavTrap(object), FragTrap(object)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = object;
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

void DiamondTrap::whoAmI()
{
	std::cout << "{Diamond name: " << _name << " | ClapTrap name: " << ClapTrap::_name << "}" << std::endl;
}

