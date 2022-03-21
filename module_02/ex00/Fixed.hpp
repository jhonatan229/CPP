#if !defined(FIXED_HPP)
#define FIXED_HPP

class Fixed
{
private:
	int	_number;
public:
	Fixed();
	Fixed(int number);
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed & operator=(const Fixed &assign);

	int getNumber(void) const;
};

#endif // FIXED_HPP
