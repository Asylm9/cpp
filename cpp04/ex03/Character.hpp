#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_SIZE 4


class Character : public ICharacter
{
	private:

	AMateria*	_inventory[MAX_SIZE];
	const std::string& _name;

	public:

	Character();
	Character(const std::string& name);
	Character(const Character& other);

	~Character() {}

	Character& operator=(const Character& rhs);

	std::string const & getName() const;
	void equip(Character* m);
	void unequip(int idx);
	void use(int idx, Character& target);
};

#endif