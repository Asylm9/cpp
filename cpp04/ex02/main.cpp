#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	int		size = 4;
	AAnimal *horde[size];

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

	std::cout << "\n/////////// Deep copy - copy constructor" << std::endl;

	Cat cat;
	Cat copyCat;

	std::cout << "\n---------- Adresses" << std::endl;
	std::cout << "Copy: " << copyCat.getBrain() << std::endl;
	std::cout << "Original: " << cat.getBrain() << std::endl;
	std::cout << "----------" << std::endl;


	cat.getBrain()->setIdeas("ORIGINAL1", 0);
	std::cout << "Original: " << cat.getBrain()->getIdeas() << std::endl;
	copyCat.getBrain()->setIdeas("ORIGINAL2", 0);
	std::cout << "Copy: " << copyCat.getBrain()->getIdeas() << std::endl;

	std::cout << "\n---------- Copy" << std::endl;
	copyCat = cat;
	std::cout << "Copy: " << copyCat.getBrain()->getIdeas() << std::endl;
	std::cout << "Original: " << cat.getBrain()->getIdeas() << std::endl;
	std::cout <<  "\n";

	std::cout << "\n/////////// Deep copy - assignment opetator" << std::endl;

	Cat cat2;
	cat2.getBrain()->setIdeas("ORIGINAL", 0);

	Cat copyCat2(cat2);

	std::cout << "\n---------- start" << std::endl;
	std::cout << "Copy: " << copyCat2.getBrain()->getIdeas() << std::endl;
	std::cout << "Original: " << cat2.getBrain()->getIdeas() << std::endl;

	std::cout << "\n---------- Adresses" << std::endl;
	std::cout << "Copy: " << copyCat2.getBrain() << std::endl;
	std::cout << "Original: " << cat2.getBrain() << std::endl;
	std::cout << "----------" << std::endl;

	std::cout << "\n---------- Copy modified" << std::endl;
	copyCat2.getBrain()->setIdeas("MODIFIED", 0);
	std::cout << "Copy: " << copyCat2.getBrain()->getIdeas() << std::endl;
	std::cout << "Original: " << cat2.getBrain()->getIdeas() << std::endl;
	std::cout <<  "\n";

/* 	Dog dog;
	Dog copyDog;

	std::cout << "\n---------- Adresses" << std::endl;
	std::cout << "Original: " << dog.getBrain() << std::endl;
	std::cout << "Copy: " << copyDog.getBrain() << std::endl;

	std::cout << "\n---------- setIdeas" << std::endl;
	dog.getBrain()->setIdeas("ORIGINAL", 0);
	std::cout << "Original: " << dog.getBrain()->getIdeas() << std::endl;
	copyDog.getBrain()->setIdeas("COPY", 0);
	std::cout << "Copy: " << copyDog.getBrain()->getIdeas() << std::endl;

	copyDog = dog;
	std::cout << "Copy: " << copyDog.getBrain()->getIdeas() << std::endl;
	std::cout << "Original: " << dog.getBrain()->getIdeas() << std::endl; */

	return 0;
}