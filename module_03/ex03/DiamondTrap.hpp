#if !defined(DIAMONDTRAP_H)
#define DIAMONDTRAP_H

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string 	_name;
public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &assign);

	void	attack(std::string const & target );
	void	whoAmI();
};

#endif // DIAMONDTRAP_H
