#if !defined(CAT_HPP)
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &assign);
	~Cat();
	void makeSound() const;
};

#endif // CAT_HPP
