#if !defined(CAT_HPP)
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_brain;

public:
	Cat();
	Cat(const std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &assign);
	~Cat();
};

#endif // CAT_HPP
