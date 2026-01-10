#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{
	public:

	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog& operator=(const Dog& rhs);

	void	makeSound() const;

	private:
	
	//Brain* brain;
	
};

#endif
