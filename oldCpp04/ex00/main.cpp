#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main()
{

	std::cout << "\n*****TESTS*****" << std::endl;

	//Const Animal ??
	Animal* animal = new Animal();
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	cat->makeSound(); 
	dog->makeSound();
	animal->makeSound();

	std::cout << "\n*****WRONG*****" << std::endl;

	WrongAnimal* wrongAnimal = new WrongAnimal();
	WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;

	wrongCat->makeSound(); 
	wrongAnimal->makeSound();

	std::cout << "\n*****Destructors*****" << std::endl;
	delete cat;
	std::cout << "/////////////" << std::endl;
	delete dog;
	std::cout << "/////////////" << std::endl;
	delete animal;
	std::cout << "/////////////" << std::endl;

	delete wrongCat;
	std::cout << "/////////////" << std::endl;
	delete wrongAnimal;

	return 0;
}