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
	~Fixed();

	Fixed & operator=(const Fixed &assign);

	bool operator>(const Fixed &assign);
	bool operator<(const Fixed &assign);
	bool operator>=(const Fixed &assign);
	bool operator<=(const Fixed &assign);
	bool operator==(const Fixed &assign);
	bool operator!=(const Fixed &assign);

	Fixed operator+(const Fixed &assign);
	Fixed operator-(const Fixed &assign);
	Fixed operator*(const Fixed &assign);
	Fixed operator/(const Fixed &assign);

	Fixed operator++(void);
	Fixed operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	
	static const Fixed &min(Fixed const &cmp_one, Fixed const &cmp_two);
	static Fixed &max(Fixed &cmp_one, Fixed &cmp_two);
	static const Fixed &max(Fixed const &cmp_one, Fixed const &cmp_two);
	static Fixed &min(Fixed &cmp_one, Fixed &cmp_two);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif // FIXED_HPP
