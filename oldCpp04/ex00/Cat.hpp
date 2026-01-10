#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat& other);

		~Cat();

		Cat& operator=(const Cat& rhs);

		const std::string& getType() const;
		void makeSound();
};


#endif