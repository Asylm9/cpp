#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{

	std::cout << "\n*****TESTS*****" << std::endl;

	Cat first;
	Cat second(first);

/* 	int	size = 10;
	Animal *horde[size];

	for (int i = 0; i < 10-; i++)
	{
		if (i % 2 == 0)
		{
			horde[i] = new Cat();
			//horde[i]
		}
		else
			horde[i] = new Dog();
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << horde[i]->getType() << std::endl;
		horde[i]->makeSound();
	}

	for (int i = 0; i < size; i++)
		delete horde[i]; */


/* 	Animal* animal = new Animal();
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	cat->makeSound(); 
	dog->makeSound();
	animal->makeSound();

	std::cout << "\n*****Destructors*****" << std::endl;
	delete cat;
	std::cout << "/////////////" << std::endl;
	delete dog;
	std::cout << "/////////////" << std::endl;
	delete animal;
	std::cout << "/////////////" << std::endl; */

	return 0;
}