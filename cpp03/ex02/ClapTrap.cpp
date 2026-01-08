#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap param constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& object) :
	 _name(object._name),
	 _hitPoints(object._hitPoints),
	 _energyPoints(object._energyPoints),
	 _attackDamage(object._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string target)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "ClapTrap " << _name << " is dead ! He is unable to attack." << std::endl;
		else
			std::cout << "ClapTrap " << _name << " has not enough energy left to attack." << std::endl;
		return;
	}

	_energyPoints--;

	std::cout << "ClapTrap " << _name << " attacks " << target
	 << " inflicting him " << _attackDamage << " points of damage." <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " can't take any more damage. He's dead!" << std::endl;
		return;
	}

	_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " is taking " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hitPoints || !_energyPoints)
	{
		if (!_hitPoints)
			std::cout << "It's too late to repair. ClapTrap " << _name << " is already dead." << std::endl;
		else
			std::cout << "ClapTrap " << _name << " has not energy left to repair himself." << std::endl;
		return;
	}

	_hitPoints += amount; 
	_energyPoints--;

	std::cout << "ClapTrap " << _name << " repairs himself and recovers " << amount << " hit points!" << std::endl;
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
