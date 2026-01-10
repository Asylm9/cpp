#ifndef CUBE_HPP
#define CUBE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cube
{
	protected:

	public:

	Cube(std::string const & type);

	std::string const & getType() const; //Returns the materia type

	virtual Cube* clone() const = 0;

	virtual void use(ICharacter& target);
};


#endif