#include "./Cat.hpp"

Cat::Cat(){
	_type = "cat";
	_ideas = new Brain();
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(const std::string type){
	this->_type = type;
	_ideas = new Brain();
	std::cout << "Cat custom constructor called!\n";
}
Cat::Cat(const Cat &copy): Animal(copy)
{
	this->operator=(copy);
	std::cout << "Copy Cat constructor called!\n";
}

Cat::~Cat(){
	if(this->_ideas != NULL)
		delete this->_ideas;
	std::cout << "Default Cat destructor called!\n";
}

Cat &Cat::operator=(const Cat &assign){
	if (this != &assign){
		if (this->_ideas != NULL){
			this->_ideas = new Brain();
			this->_ideas = assign._ideas;
		}
		this->_type = assign._type;
	}
	std::cout << "Default Cat destructor called!\n";
	return *this;
}

void Cat::makeSound(){
	std::cout << "MIAUUUUUU!\n";
}

void Cat::setIdea(int local, std::string memory){
	this->_ideas->setIdea(local, memory);
}

std::string Cat::getIdea(int local){
	return (this->_ideas->getIdeas(local));
}