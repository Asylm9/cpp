#ifndef  FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int	_fixedPointValue;
	static const int _fractBits; //appartient a la classe et non a l'objet (commun a tous les objets)

	public :

	Fixed(void);
	Fixed(Fixed& object);

	~Fixed(void);

	Fixed&  operator=(Fixed const& rhs); //passe par defaut l'instance courante. Donc il y a 2 parametres en pratique et non 1.
	//rhs = right hand side
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif