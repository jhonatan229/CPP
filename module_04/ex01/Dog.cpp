#include "./Dog.hpp"

Dog::Dog()
{
	_type = "dog";
	_sound = "AU AU";
	_brain = new Brain();
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(const std::string type)
{
	this->_type = type;
	_sound = "AU AU";
	_brain = new Brain();
	std::cout << "Dog custom constructor called!\n";
}
Dog::Dog(const Dog &copy)
{
	this->_type = copy.getType();
	this->_brain = copy._brain;
	this->_sound = copy._sound;
	std::cout << "Dog assign constructor called!\n";
}
Dog &Dog::operator=(const Dog &assign)
{
	this->_type = assign.getType();
	this->_brain = assign._brain;
	this->_sound = assign._sound;
	std::cout << "Dog operator called!\n";
	return *this;
}
Dog::~Dog()
{
	delete(_brain);
	std::cout << "Dog default destructor called!\n";
}
