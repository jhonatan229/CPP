#include "./Cat.hpp"

Cat::Cat()
{
	_type = "cat";
	_ideas = new Brain();
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	_ideas = new Brain();
	this->operator=(copy);
	std::cout << "Copy Cat constructor called!\n";
}

Cat::~Cat()
{
	delete this->_ideas;
	std::cout << "Default Cat destructor called!\n";
}

Cat &Cat::operator=(const Cat &assign)
{
	delete _ideas;
	this->_ideas = new Brain();
	*(this->_ideas) = *(assign._ideas);
	this->_type = assign._type;
	std::cout << "Default Cat operator called!\n";
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAUUUUUU!\n";
}

void Cat::setIdea(int local, std::string memory)
{
	this->_ideas->setIdea(local, memory);
}

std::string Cat::getIdea(int local) const
{
	return (this->_ideas->getIdeas(local));
}