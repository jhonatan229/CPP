#include "./Dog.hpp"

Dog::Dog()
{
	_type = "dog";
	_ideas = new Brain();
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->_ideas = new Brain();
	this->operator=(copy);
	std::cout << "Copy Dog constructor called!\n";
}

Dog::~Dog()
{
	delete this->_ideas;
	std::cout << "Default Dog destructor called!\n";
}
Dog &Dog::operator=(const Dog &assign)
{
	delete this->_ideas;
	this->_ideas = new Brain();
	*(this->_ideas) = *(assign._ideas);
	this->_type = assign._type;
	std::cout << "Default Dog operator called!\n";
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "AUUUUUU AU AUUUUUU!\n";
}

void Dog::setIdea(int local, std::string memory)
{
	this->_ideas->setIdea(local, memory);
}

std::string Dog::getIdea(int local) const
{
	return (this->_ideas->getIdeas(local));
}