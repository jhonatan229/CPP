#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;
	std::string _sound;
public:
	Animal();
	Animal(std::string const type);
	Animal(Animal const &copy);
	Animal &operator=(Animal const &assign);
	~Animal();
	std::string getType()const;
	void makeSound();
};

#endif // ANIMAL_HPP
