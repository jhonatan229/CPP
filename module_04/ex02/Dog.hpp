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
	Dog(const Dog &copy);
	~Dog();

	Dog &operator=(const Dog &assign);
	
	void makeSound() const;
	void setIdea(int local, std::string memory);
	std::string getIdea(int local) const;
};

#endif // DOG_HPP
