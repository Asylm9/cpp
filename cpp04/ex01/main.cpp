#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int		size = 10;
	Animal *horde[size];

	std::cout << "\n/////////// Creation loop" << std::endl;
	for (int i = 0; i < size; i++ )
	{
		if (i % 2)
			(horde[i]) = new Dog();
		else
			horde[i] = new Cat();
	}

	std::cout << "\n/////////// Loop MakeSound + destruction" << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "\n---------- " << i + 1 << ")" << std::endl;
		horde[i]->makeSound();
		delete horde[i];
	}

	std::cout << "\n/////////// Test Deep copy" << std::endl;

	Cat cat;
	Cat copyCat(cat);

	std::cout << "\n---------- Adresses" << std::endl;
	std::cout << "Original: " << cat.getBrain() << std::endl;
	std::cout << "Copy: " << copyCat.getBrain() << std::endl;

	std::cout << "\n---------- setIdeas" << std::endl;
	cat.getBrain()->setIdeas("ORIGINAL", 0);
	std::cout << "Original: " << cat.getBrain()->getIdeas() << std::endl;
	copyCat.getBrain()->setIdeas("COPY", 0);
	std::cout << "Copy: " << copyCat.getBrain()->getIdeas() << std::endl;
	std::cout << "Original: " << cat.getBrain()->getIdeas() << std::endl;
	std::cout <<  "\n";

	return 0;
}