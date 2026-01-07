#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap param constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& object)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = object;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;

}

ClapTrap&  ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "Copy ClapTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this); 
}

void ClapTrap::attack(const std::string& target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "{ClapTrap "<< _name << " has left this world}" << std::endl;
		else
			std::cout << "{ClapTrap "<< _name << " has not enough energy left to attack}" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "{ClapTrap " << _name << " attacks " << target << " inflicting him " << _attackDamage << " points of damage}" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints) {
		_hitPoints = 0;
		std::cout << "{ClapTrap " << _name << " has left this world}" << std::endl;
	}
	else {
	_hitPoints -= amount;
	std::cout << "{ClapTrap "<< _name << " took " << amount
			<< " points of damage}" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "{ClapTrap "<< _name << " is dead and cannot be repaired}" << std::endl;
		else
			std::cout << "{ClapTrap "<< _name << " has no energy left to repair}" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += amount;
	std::cout << "{ClapTrap "<< _name << " repairs himself for " << amount << " HP}" << std::endl;
}

void ClapTrap::displayStat()
{
	std::cout << "===================" << std::endl;
	std::cout << "Name: " << _name << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << "===================" << std::endl;
}

