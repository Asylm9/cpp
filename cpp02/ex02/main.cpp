#include "Fixed.hpp"

int	main(void)
{
	Fixed a(2); Fixed b(2);
	//Fixed c = a + b;
	//Fixed c = a - b;
	Fixed c = a * b;
	//Fixed c = a / b;

	std::cout << "\nArithmetic operators" << std::endl;
	std::cout << "c value = " << c.toInt() << std::endl;
	std::cout << "c value = " << c.toFloat() << std::endl;


	std::cout << "\nComparision operators" << std::endl;
	std::cout << "a > b: " << (a > b ? "true":"false") << std::endl;
	std::cout << "a < b: " << (a < b ? "true":"false") << std::endl;
	std::cout << "a == b: " << (a == b ? "true":"false") << std::endl;
	std::cout << "a != b: " << (a != b ? "true":"false") << std::endl;
	std::cout << "a >= b: " << (a >= b ? "true":"false") << std::endl;
	std::cout << "a <= b: " << (a <= b ? "true":"false") << std::endl;

/* 	std::cout << "\nIncrement/decrement operators:" << std::endl;
	std::cout << "result raw before:  " << a.getRawBits() << std::endl;
	a--;
	std::cout << "result raw after:  " << a.getRawBits() << std::endl;
	std::cout << "result int:  " << a.toInt() << std::endl;
	std::cout << "result float:  " << a.toFloat() << std::endl; */

	Fixed d(-5);
	Fixed e(35);
	std::cout << "\nMin / Max:" << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a,b).toInt() << std::endl;
	std::cout << "const min(d, e): " << Fixed::min(c,d).toInt() << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a,b).toInt() << std::endl;
	std::cout << "const max(d, e): " << Fixed::max(c,d).toInt() << std::endl;

/* 	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl; */

	return 0;
}
