#if !defined(DOG_HPP)
#define DOG_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	Dog(const std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &assign);
	~Dog();
};

#endif // DOG_HPP
