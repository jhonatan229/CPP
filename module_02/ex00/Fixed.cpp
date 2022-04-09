#include "Fixed.hpp"

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called\n";
}
Fixed::Fixed(const Fixed &copy)
{
	this->operator=(copy);
	std::cout << "Copy assignment called\n";
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