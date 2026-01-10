#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:

	Brain *brain;

	public:

		Cat();
		Cat(const Cat& other);

		~Cat();

		Cat& operator=(const Cat& rhs);

		const std::string& 	getType() const;
		const Brain*		getBrain() const;
		Brain*				setBrain();

		void makeSound();
};

#endif