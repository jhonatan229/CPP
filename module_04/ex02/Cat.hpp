#if !defined(CAT_HPP)
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_ideas;
public:
	Cat();
	Cat(const std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &assign);
	~Cat();
	void makeSound() const;
	void setIdea(int local, std::string memory);
	std::string getIdea(int local) const;
};

#endif // CAT_HPP
