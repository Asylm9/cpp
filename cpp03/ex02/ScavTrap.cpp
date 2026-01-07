#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;

	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& object) : ClapTrap(object)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const& rhs)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this); 
}

void ScavTrap::attack(const std::string& target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "{ScavTrap "<< _name << " has left this world}" << std::endl;
		else
			std::cout << "{ScavTrap "<< _name << " has not enough energy left to attack}" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "{ScavTrap " << _name << " attacks " << target << " inflicting him " << _attackDamage << " points of damage}" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!_hitPoints)
	{
		std::cout << "{ScavTrap "<< _name << " cannot guard the gate, he's dead}" << std::endl;
		return;
	}
		std::cout << "{ScavTrap "<< _name << " is now in gate keeper mode!}" << std::endl;

}


