#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:

	std::string	type;

	public:

		AAnimal();
		AAnimal(const AAnimal& other);

		virtual ~AAnimal();

		AAnimal& operator=(const AAnimal& rhs);

		virtual const std::string& getType() const;
		virtual void makeSound() = 0;
};

#endif