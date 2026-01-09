#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), _name("Default_diamond_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;

/* 	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage; */

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;

}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap param constructor called" << std::endl;

	_name = name;
/* 	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage; */

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& object) : ClapTrap(object), ScavTrap(object), FragTrap(object), _name(object._name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::displayStat()
{
	std::cout << "===================" << std::endl;
	std::cout << "Diamond Name: " << _name << std::endl;
	std::cout << "Diamond Hit points: " << _hitPoints << std::endl;
	std::cout << "Diamond Energy points: " << _energyPoints << std::endl;
	std::cout << "Diamond Attack damage: " << _attackDamage << std::endl;
	std::cout << "===================" << std::endl;
}
