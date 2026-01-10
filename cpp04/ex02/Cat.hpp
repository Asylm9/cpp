#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
	public:

	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat& operator=(const Cat& rhs);

	Brain*		getBrain() const;
	void		makeSound() const;

	private:

	Brain* _brain;
	
};

#endif
