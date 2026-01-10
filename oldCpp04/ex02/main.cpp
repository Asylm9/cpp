#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{

	std::cout << "\n*****TESTS*****" << std::endl;

	/* AAnimal = abstract class -> non implementable */
	//AAnimal* Aanimal = new AAnimal(); 
	AAnimal* cat = new Cat();
	AAnimal* dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	cat->makeSound(); 
	dog->makeSound();

	std::cout << "\n*****Destructors*****" << std::endl;
	delete cat;
	std::cout << "/////////////" << std::endl;
	delete dog;
	std::cout << "/////////////" << std::endl;

	return 0;
}