#if !defined(DOG_HPP)
#define DOG_HPP

#include "./Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string type);
	Dog(const Dog &copy);
	Dog &operator=(const Dog &assign);
	~Dog();
	void makeSound() const ;
};

#endif // DOG_HPP
