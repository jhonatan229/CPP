#if !defined(FIXED_HPP)
#define FIXED_HPP

#include <iostream>
#include <cmath>


class Fixed
{
private:
	int	_fixedPoint;
	static const int _value = 8;
public:
	Fixed();
	Fixed( float const f);
	Fixed( int const i);
	Fixed(const Fixed &copy);
	Fixed & operator=(const Fixed &assign);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif // FIXED_HPP
