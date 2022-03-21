#include "./Dog.hpp"

Dog::Dog(){
	_type = "dog";
	_sound = "AU AU";
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(const std::string type){
	this->_type = type;
	std::cout << "Dog custom constructor called!\n";
}
Dog::Dog(const Dog &copy){
	this->_type = copy.getType();
	std::cout << "Dog assign constructor called!\n";
}
Dog &Dog::operator=(const Dog &assign){
	this->_type = assign.getType();
	std::cout << "Dog operator called!\n";
	return *this;
}
Dog::~Dog(){
	std::cout << "Dog default destructor called!\n";
}
