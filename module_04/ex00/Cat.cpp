#include "./Cat.hpp"

Cat::Cat(){
	_type = "cat";
	_sound = "MIAU!";
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(const std::string type){
	this->_type = type;
	std::cout << "Cat custom constructor called!\n";
}
Cat::Cat(const Cat &copy){
	this->_type = copy.getType();
	std::cout << "Cat assign constructor called!\n";
}
Cat &Cat::operator=(const Cat &assign){
	this->_type = assign.getType();
	std::cout << "Cat operator called!\n";
	return *this;
}
Cat::~Cat(){
	std::cout << "Cat default destructor called!\n";
}
