#include "./Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called!\n";
}
Brain::Brain(Brain const &copy){
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = copy.getIdeas(i);
	std::cout << "Brain custom constructor called!\n";
}
Brain &Brain::operator=(Brain const &assign){
	
	for (size_t i = 0; i < 100; i++)
		_ideas[i] = assign.getIdeas(i);
	std::cout << "Brain operator called!\n";
	return *this;
}
Brain::~Brain(){
	std::cout << "Brain default destructor called!\n";
}
std::string Brain::getIdeas(int local) const{
	return _ideas[local];
}