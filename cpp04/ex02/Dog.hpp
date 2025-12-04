#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
		Brain*				setBrain();

		void	makeSound();
};


#endif