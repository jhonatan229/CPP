#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	_sound = "ABLUeBLUEBLe!";
	std::cout << "WrongAnimal default constructor called!\n";
}

WrongAnimal::WrongAnimal(const std::string type){
	this->_type = type;
	std::cout << "WrongAnimal custom constructor called!\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	this->_type = copy.getType();
	std::cout << "WrongAnimal assign constructor called!\n";
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign){
	this->_type = assign.getType();
	std::cout << "WrongAnimal operator called!\n";
	return *this;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal default destructor called!\n";
}
std::string WrongAnimal::getType() const{
	return this->_type;
}
void WrongAnimal::makeSound(){
	std::cout << _sound << std::endl;
}