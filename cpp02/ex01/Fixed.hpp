#ifndef  FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

	int	_fixedPointValue;
	static const int _fractBits;

	public :

	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed& object);

	~Fixed(void);

	Fixed&  operator=(Fixed const& rhs);

	int	getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;

	
};


#endif