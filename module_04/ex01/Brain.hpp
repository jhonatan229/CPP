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
	Brain &operator=(Brain const &assign);
	~Brain();
	std::string getIdeas(int local) const;
};

#endif // BRAIN_HPP
