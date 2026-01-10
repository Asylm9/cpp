#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
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
