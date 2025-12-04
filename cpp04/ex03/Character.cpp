#include <iostream>
#include "Character.hpp"

Character::Character() : _name("Default")
{
	std::cout << "[Character] Default constructor called" << std::endl;
	for (int i = 0; i < MAX_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string& name) : _name(name)
{
	std::cout << "[Character] name constructor called" << std::endl;

}

Character::Character(const Character& other)
{
	std::cout << "[Character] Copy constructor called" << std::endl;
	*this = other;
}

Character::~Character()
{
	std::cout << "[Character] Destructor called" << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	std::cout << "[Character] Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		*this = rhs;
		for (int i = 0; i < MAX_SIZE; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
		}
		//_inventory = NULL;
		for (int i = 0; i < MAX_SIZE; i++)
		{
			_inventory[i] = rhs._inventory[i]; // Faire copie !
		}
	}
	return (*this);
}

