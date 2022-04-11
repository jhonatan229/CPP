#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(Brain const &copy);
	~Brain();
	
	Brain &operator=(Brain const &assign);

	std::string getIdeas(int local) const;
	void setIdea(int local, std::string idea);
};

#endif // BRAIN_HPP
