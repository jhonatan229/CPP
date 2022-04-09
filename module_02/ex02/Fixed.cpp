#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
}
Fixed::Fixed(const Fixed &copy)
{
	this->operator=(copy);
}
Fixed::Fixed(float const f)
{
	this->_fixedPoint = roundf(f * (1 << this->_value));
}
Fixed::Fixed(int const i)
{
	this->_fixedPoint = i << this->_value;
}
Fixed::~Fixed()
{
}
Fixed &Fixed::operator=(const Fixed &assign)
{
	this->_fixedPoint = assign.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &assign)
{
	return (this->getRawBits() > assign.getRawBits());
}
bool Fixed::operator<(const Fixed &assign)
{
	return (this->getRawBits() < assign.getRawBits());
}
bool Fixed::operator>=(const Fixed &assign)
{
	return (this->getRawBits() >= assign.getRawBits());
}
bool Fixed::operator<=(const Fixed &assign)
{
	return (this->getRawBits() <= assign.getRawBits());
}
bool Fixed::operator==(const Fixed &assign)
{
	return (this->getRawBits() == assign.getRawBits());
}
bool Fixed::operator!=(const Fixed &assign)
{
	return (this->getRawBits() != assign.getRawBits());
}
Fixed Fixed::operator+(const Fixed &assign)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() + assign.getRawBits());
	return (temp);
}
Fixed Fixed::operator-(const Fixed &assign)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() - assign.getRawBits());
	return (temp);
}
Fixed Fixed::operator*(const Fixed &assign)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() * assign.getRawBits() >> this->_value);
	return (temp);
}
Fixed Fixed::operator/(const Fixed &assign)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() / assign.getRawBits() << this->_value);
	return (temp);
}
Fixed  Fixed::operator++(void)
{
	Fixed temp;
	temp._fixedPoint = ++this->_fixedPoint;
	return(temp);
}
Fixed  Fixed::operator--(void)
{
	Fixed temp;
	temp._fixedPoint = --this->_fixedPoint;
	return(temp);
}
Fixed  Fixed::operator++(int)
{
	Fixed temp;
	temp._fixedPoint = this->_fixedPoint++;
	return(temp);
}
Fixed  Fixed::operator--(int)
{
	Fixed temp;
	temp._fixedPoint = this->_fixedPoint--;
	return(temp);
}

const Fixed &Fixed::min(Fixed const &cmp_one, Fixed const &cmp_two)
{
	return ((cmp_one.getRawBits() < cmp_two.getRawBits()) ? cmp_one : cmp_two);
}
const Fixed &Fixed::max(Fixed const &cmp_one, Fixed const &cmp_two)
{
	return ((cmp_one.getRawBits() > cmp_two.getRawBits()) ? cmp_one : cmp_two);
}
Fixed &Fixed::max(Fixed &cmp_one, Fixed &cmp_two)
{
	return ((cmp_one.getRawBits() > cmp_two.getRawBits()) ? cmp_one : cmp_two);
}
Fixed &Fixed::min(Fixed &cmp_one, Fixed &cmp_two)
{
	return ((cmp_one.getRawBits() < cmp_two.getRawBits()) ? cmp_one : cmp_two);
}

int Fixed::getRawBits(void) const
{
	return this->_fixedPoint;
}
void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}
float Fixed::toFloat(void) const
{
	return ((float)(this->_fixedPoint) / (1 << this->_value));
}
int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_value);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}