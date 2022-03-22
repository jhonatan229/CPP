#include "Animal.hpp"

Animal::Animal(){
	_sound = "ABLUeBLUEBLe!";
	std::cout << "Animal default constructor called!\n";
}

Animal::Animal(const std::string type){
	this->_type = type;
	std::cout << "Animal custom constructor called!\n";
}
Animal::Animal(const Animal &copy){
	this->_type = copy.getType();
	std::cout << "Animal assign constructor called!\n";
}
Animal &Animal::operator=(const Animal &assign){
	this->_type = assign.getType();
	std::cout << "Animal operator called!\n";
	return *this;
}
Animal::~Animal(){
	std::cout << "Animal default destructor called!\n";
}
std::string Animal::getType() const{
	return this->_type;
}

void Animal::makeSound(){
	std::cout << _sound << std::endl;
}