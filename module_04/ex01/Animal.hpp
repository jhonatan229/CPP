#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const &copy);
	Animal &operator=(Animal const &assign);
	virtual ~Animal();
	std::string getType()const;
	virtual void makeSound() const;
};

#endif // ANIMAL_HPP
