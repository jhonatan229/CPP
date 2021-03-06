#include "./Dog.hpp"

Dog::Dog(){
	this->_type = "dog";
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	this->operator=(copy);
	std::cout << "Copy Dog constructor called!\n";
}

Dog::~Dog(){
	std::cout << "Default Dog destructor called!\n";
}
Dog &Dog::operator=(const Dog &assign){
	this->_type = assign._type;
	std::cout << "Default Dog operator called!\n";
	return *this;
}

void Dog::makeSound() const{
	std::cout << "AUUUUUU AU AUUUUUU!\n";
}