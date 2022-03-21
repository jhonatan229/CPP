#include "Fixed.hpp"

Fixed::Fixed(){

}
Fixed::Fixed(int number){
	this->_number = number;
}
Fixed::Fixed(const Fixed &copy){
	this->_number = copy.getNumber();
}
Fixed::~Fixed(){

}
Fixed &Fixed::operator=(const Fixed &assign){
	this->_number = assign.getNumber();
	return *this;
}

int Fixed::getNumber() const{
	return _number;
}