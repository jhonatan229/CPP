#include "./WrongCat.hpp"

WrongCat::WrongCat(){
	_type = "Wrongcat";
	std::cout << "WrongCat default constructor called!\n";
}

WrongCat::WrongCat(const std::string type){
	this->_type = type;
	std::cout << "WrongCat custom constructor called!\n";
}
WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	this->operator=(copy);
	std::cout << "Copy WrongCat constructor called!\n";
}

WrongCat::~WrongCat(){
	std::cout << "Default WrongCat destructor called!\n";
}
WrongCat &WrongCat::operator=(const WrongCat &assign){
	if (this != &assign){
		this->_type = assign._type;
	}
	std::cout << "Default WrongCat destructor called!\n";
	return *this;
}
void WrongCat::makeSound(){
	std::cout << "MIAUUUUUU!\n";
}
