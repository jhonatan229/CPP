#if !defined(WRONGANIMAL_HPP)
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
	WrongAnimal &operator=(WrongAnimal const &assign);
	~WrongAnimal();

	std::string getType()const;
	void makeSound() const;
};

#endif // WRONGANIMAL_HPP
