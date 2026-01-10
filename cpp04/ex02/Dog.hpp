#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
	public:

	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog& operator=(const Dog& rhs);

	Brain*	getBrain() const;
	void	makeSound() const;

	private:
	
	Brain* _brain;
	
};

#endif
