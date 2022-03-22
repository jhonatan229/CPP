#include "./Dog.hpp"

Dog::Dog(){
	_type = "dog";
	_ideas = new Brain();
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(const std::string type){
	this->_type = type;
	_ideas = new Brain();
	std::cout << "Dog custom constructor called!\n";
}
Dog::Dog(const Dog &copy): Animal(copy)
{
	this->operator=(copy);
	std::cout << "Copy Dog constructor called!\n";
}

Dog::~Dog(){
	if(this->_ideas != NULL)
		delete this->_ideas;
	std::cout << "Default Dog destructor called!\n";
}
Dog &Dog::operator=(const Dog &assign){
	if (this != &assign){
		if (this->_ideas != NULL){
			this->_ideas = new Brain();
			this->_ideas = assign._ideas;
		}
		this->_type = assign._type;
	}
	std::cout << "Default Dog destructor called!\n";
	return *this;
}

void Dog::makeSound(){
	std::cout << "AUUUUUU AU AUUUUUU!\n";
}

void Dog::setIdea(int local, std::string memory){
	this->_ideas->setIdea(local, memory);
}

std::string Dog::getIdea(int local){
	return(this->_ideas->getIdeas(local));
}