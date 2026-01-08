#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap param constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& object) : ClapTrap(object)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs);
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "ScavTrap " << _name << " is dead ! He is unable to attack." << std::endl;
		else
			std::cout << "ScavTrap " << _name << " has not enough energy left to attack." << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << "ScavTrap " << _name << " attacks " << target
	 << " inflicting him " << _attackDamage << " points of damage." <<std::endl;
}

void 	ScavTrap::guardGate()
{
	if (!_hitPoints)
	{
		std::cout << "ScavTrap "<< _name << " cannot guard the gate, he's dead" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

