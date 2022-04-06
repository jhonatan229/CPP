#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	_fixedPoint;
	static const int _value = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed & operator=(const Fixed &assign);
	~Fixed();
	int getRawBits(void);
	void setRawBits(int const raw);
};

#endif // FIXED_HPP
