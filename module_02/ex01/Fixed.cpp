#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &copy)
{
	this->operator=(copy);
	std::cout << "Copy assignment called\n";
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
	std::cout << "Default desconstructor called\n";
}
Fixed &Fixed::operator=(const Fixed &assign)
{
	this->_fixedPoint = assign.getRawBits();
	std::cout << "Copy assignment operator called\n";
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_fixedPoint;
}
void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
	std::cout << "setRawBits member function called\n";
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