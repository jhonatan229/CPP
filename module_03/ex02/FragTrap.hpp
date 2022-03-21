#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include "./ScavTrap.hpp"


class FragTrap : public ScavTrap
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
