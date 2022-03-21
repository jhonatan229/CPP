#include "./WrongCat.hpp"

WrongCat::WrongCat(){
	_type = "Wrongcat";
	std::cout << "WrongCat default constructor called!\n";
}

WrongCat::WrongCat(const std::string type){
	this->_type = type;
	std::cout << "WrongCat custom constructor called!\n";
}
WrongCat::WrongCat(const WrongCat &copy){
	this->_type = copy.getType();
	std::cout << "WrongCat assign constructor called!\n";
}
WrongCat &WrongCat::operator=(const WrongCat &assign){
	this->_type = assign.getType();
	std::cout << "WrongCat operator called!\n";
	return *this;
}
WrongCat::~WrongCat(){
	std::cout << "Cat default destructor called!\n";
}
