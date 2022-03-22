#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called!\n";
}

WrongAnimal::WrongAnimal(const std::string type){
	this->_type = type;
	std::cout << "WrongAnimal custom constructor called!\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->operator=(copy);
	std::cout << "Copy WrongAnimal constructor called!\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Default WrongAnimal destructor called!\n";
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign){
	if (this != &assign){
		this->_type = assign._type;
	}
	std::cout << "Default WrongAnimal destructor called!\n";
	return *this;
}
std::string WrongAnimal::getType() const{
	return this->_type;
}
void WrongAnimal::makeSound(){
	std::cout << "BLAUBLAUBLAU" << std::endl;
}