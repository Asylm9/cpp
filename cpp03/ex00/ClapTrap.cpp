#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& object)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;

}

ClapTrap&  ClapTrap::operator=(ClapTrap const& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
			std::cout << "{ClapTrap "<< _name << " has not enough energy to attack}" << std::endl;
		return ;
	}
	_attackDamage++;
	_energyPoints--;
	std::cout << "{ClapTrap " << _name << " attacks " << target << " causing him 1 point of damage}" << std::endl;
	if (_attackDamage == 10)
		std::cout << "{ClapTrap " << target << " is DEAD}" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
	std::cout << "{ClapTrap "<< _name << " took " << amount << " point of damage" << std::endl;
	std::cout << "He have " << _hitPoints << " health points left}" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints =_hitPoints + amount;
	_energyPoints = _energyPoints - amount;
	std::cout << "{ClapTrap "<< _name << " gave 1 energy point to regenerate himself" << std::endl;
	std::cout << "He now have " << _hitPoints << " health points left}" << std::endl;

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

