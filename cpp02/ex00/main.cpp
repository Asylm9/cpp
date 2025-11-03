#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "-----------------" << std::endl;
	c.setRawBits(1990);
	std::cout << c.getRawBits() << std::endl;
	b = c;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "-----------------" << std::endl;

	return 0;
}
/* fractBits: Identique pour tous. Quand un membre est static, il n’appartient pas a une instance 'this' mais a la classe elle-meme.
Et quand il est en plus const, sa valeur est fixee une fois pour toutes à la compilation.
si fractBits n'etait pas static, chaque objet aurait sa propre copie de fractBits (alors que sont contenu serait identique)
fractBits n’appartient plus à l’objet, mais a la classe entiere. */