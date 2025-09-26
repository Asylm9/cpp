#ifndef  FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int	fixedPointValue;
	static const int fractBits;

	public :

	Fixed(void);
	Fixed(Fixed& object);

	~Fixed(void);

	Fixed&  operator=(Fixed const& rhs);

	int	getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif