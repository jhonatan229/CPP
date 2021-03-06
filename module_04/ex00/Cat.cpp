#include "./Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	this->operator=(copy);
	std::cout << "Copy Cat constructor called!\n";
}

Cat::~Cat(){
	std::cout << "Default Cat destructor called!\n";
}
Cat &Cat::operator=(const Cat &assign){
	this->_type = assign._type;
	std::cout << "Default Cat operator called!\n";
	return *this;
}

void Cat::makeSound() const{
	std::cout << "MIAUUUUUU!\n";
}