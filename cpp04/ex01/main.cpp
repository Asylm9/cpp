#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{

	std::cout << "\n*****TESTS*****\n" << std::endl;

	std::cout << "\n*****TESTS COPY*****" << std::endl;
	Cat first;
	const std::string idea = "BRAIN ROT" ;
	first.setBrain()->setIdeas(0, idea);
	Cat second(first);
	Cat third = second;

	std::cout << "\n*****memory test array*****" << std::endl;
	const Brain* brain1 = first.getBrain();
	std::cout << brain1->getIdeas(0) << std::endl;
	std::cout << &brain1->getIdeas(0) << std::endl;

	const Brain* brain2 = second.getBrain();
	std::cout << brain2->getIdeas(0) << std::endl;
	std::cout << &brain2->getIdeas(0) << std::endl;

	const Brain* brain3 = third.getBrain();
	std::cout << brain3->getIdeas(0) << std::endl;
	std::cout << &brain3->getIdeas(0) << std::endl;
	
	std::cout << "\n*****memory test ptr*****" << std::endl;
	std::cout << first.getBrain() << std::endl;
	std::cout << second.getBrain() << std::endl;
	std::cout << third.getBrain() << std::endl;

	std::cout << "\n*****END*****\n" << std::endl;

	std::cout << "\n*****TESTS ARRAY OF ANIMAL OBJ*****" << std::endl;
	int	size = 5;
	Animal *horde[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			horde[i] = new Cat();
		}
		else
			horde[i] = new Dog();
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << horde[i]->getType() << std::endl;
		horde[i]->makeSound();
	}

	for (int i = 0; i < size; i++)
		delete horde[i];

	std::cout << "\n*****END*****\n" << std::endl;

	return 0;
}