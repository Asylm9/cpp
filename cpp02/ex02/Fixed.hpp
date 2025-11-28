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
	Fixed(Fixed const& object);

	Fixed(const int n);
	Fixed(const float f);

	~Fixed();

	Fixed&  operator=(Fixed const& rhs) ;

	/* arithmetic operators */
	Fixed  operator+(Fixed const& rhs) const;
	Fixed  operator-(Fixed const& rhs) const;
	Fixed  operator*(Fixed const& rhs) const;
	Fixed  operator/(Fixed const& rhs) const;

	/*comparison operators */
	bool  operator>(Fixed const& rhs) const;
	bool  operator<(Fixed const& rhs) const;
	bool  operator==(Fixed const& rhs) const;
	bool  operator!=(Fixed const& rhs) const;
	bool  operator>=(Fixed const& rhs) const;
	bool  operator<=(Fixed const& rhs) const;

	/*increment/decrement operators */
	Fixed&  operator++(); //pre
	Fixed  operator++(int); //post
	Fixed&  operator--();
	Fixed  operator--(int);

	/* min/max */
	static Fixed& min(Fixed& x, Fixed& y);
	static const Fixed& min(Fixed const& x, Fixed const& y);
	static Fixed& max(Fixed& x, Fixed& y);
	static const Fixed& max(Fixed const& x, Fixed const& y);

	int	getRawBits() const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const; 
};

std::ostream& operator<<(std::ostream& os, Fixed const& object);

#endif
