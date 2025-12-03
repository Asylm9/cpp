#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	protected:

	std::string	type;

	public:

		Dog();
		Dog(const Dog& other);

		~Dog();

		Dog& operator=(const Dog& rhs);

		const std::string& getType() const;
		void makeSound();
};


#endif