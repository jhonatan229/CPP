#if !defined(CAT_HPP)
#define CAT_HPP

#include "./Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &assign);
	~Cat();
};

#endif // CAT_HPP
