#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "./ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &copy);
	~FragTrap();

	FragTrap &operator=(const FragTrap &assign);
	void highFivesGuys();
};

#endif // FRAGTRAP_HPP
