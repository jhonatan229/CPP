#if !defined(WRONGCAT_HPP)
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const std::string type);
	WrongCat(const WrongCat &copy);
	WrongCat &operator=(const WrongCat &assign);
	~WrongCat();
	void makeSound() const;
};

#endif // WRONGCAT_HPP
