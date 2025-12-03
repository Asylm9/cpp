#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	std::string	type;

	public:

		WrongCat();
		WrongCat(const WrongCat& other);

		~WrongCat();

		WrongCat& operator=(const WrongCat& rhs);

		const std::string& getType() const;
		void makeSound();
};


#endif