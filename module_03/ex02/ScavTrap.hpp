#if !defined(SCAVTRAP_HPP)
#define SCAVTRAP_HPP

#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &assign);
	
	void attack(const std::string &target);
	void guardGate();
};

#endif // SCAVTRAP_HPP
