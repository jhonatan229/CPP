#if !defined(DOG_HPP)
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_ideas;
public:
	Dog();
	Dog(const std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &assign);
	~Dog();
	void makeSound();
	void setIdea(int local, std::string memory);
	std::string getIdea(int local);
};

#endif // DOG_HPP
