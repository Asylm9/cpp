#ifndef  FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:

	int	_fixedPointValue;
	static const int _fractBits = 8;

	public :

	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const& object);

	~Fixed();

	Fixed&  operator=(Fixed const& rhs);

	int	getRawBits() const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const; 

	
};

std::ostream& operator<<(std::ostream& os, Fixed& fixed);

#endif
