#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:

	Brain *brain;

	public:

		Dog();
		Dog(const Dog& other);

		~Dog();

		Dog& operator=(const Dog& rhs);

		const std::string&	getType() const;
		const Brain*		getBrain() const;

		void	makeSound();
};


#endif