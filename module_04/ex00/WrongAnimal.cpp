#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type( "Tazmania" ){
	std::cout << "WrongAnimal default constructor called!\n";
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
void WrongAnimal::makeSound() const{
	std::cout << "BLAUBLAUBLAU" << std::endl;
}