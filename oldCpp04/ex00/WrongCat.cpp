#include "WrongCat.hpp"

	WrongCat::WrongCat() : WrongAnimal()
	{
		type = "Wrong Cat";
		std::cout << "[WrongCat] Default constructor called" << std::endl;
	}

	WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
	{
		std::cout << "[WrongCat] Copy constructor called" << std::endl;
	}

	WrongCat::~WrongCat()
	{
		std::cout << "[WrongCat] Destructor called" << std::endl;
	}

	WrongCat& WrongCat::operator=(const WrongCat& rhs)
	{
		std::cout << "[WrongCat] Copy assignment operator called" << std::endl;
		if (this != &rhs)
			type = rhs.type;
		return (*this);
	}

	const std::string& WrongCat::getType() const
	{
		return (type);
	}

	void WrongCat::makeSound()
	{
		std::cout << "The " << type << " meows" << std::endl;
	}