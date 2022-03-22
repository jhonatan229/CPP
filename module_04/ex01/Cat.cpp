#include "./Cat.hpp"

Cat::Cat(){
	_type = "cat";
	_sound = "MIAU!";
	_brain = new Brain();
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(const std::string type){
	this->_type = type;
	_sound = "MIAU!";
	_brain = new Brain();
	std::cout << "Cat custom constructor called!\n";
}
Cat::Cat(const Cat &copy){
	this->_type = copy.getType();
	this->_sound = copy._sound;
	this->_brain = copy._brain; 
	std::cout << "Cat assign constructor called!\n";
}
Cat &Cat::operator=(const Cat &assign){
	this->_type = assign.getType();
	this->_sound = assign._sound;
	this->_brain = assign._brain;
	std::cout << "Cat operator called!\n";
	return *this;
}
Cat::~Cat(){
	delete(_brain);
	std::cout << "Cat default destructor called!\n";
}
