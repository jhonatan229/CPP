#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called!\n";
}

Animal::Animal(const std::string type){
	this->_type = type;
	std::cout << "Animal custom constructor called!\n";
}
Animal::Animal(const Animal &copy)
{
	this->operator=(copy);
	std::cout << "Copy Animal constructor called!\n";
}

Animal::~Animal(){
	std::cout << "Default Animal destructor called!\n";
}
Animal &Animal::operator=(const Animal &assign){
	if (this != &assign){
		this->_type = assign._type;
	}
	std::cout << "Default Animal destructor called!\n";
	return *this;
}
std::string Animal::getType() const{
	return this->_type;
}
