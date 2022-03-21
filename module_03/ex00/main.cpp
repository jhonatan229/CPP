#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap soldier;
		for (size_t i = 0; i < 12; i++)
			soldier.attack("mage");
	}
	std::cout << "\n\n\n";
	{
		ClapTrap soldier("soldier");
		soldier.takeDamage(11);
		soldier.beRepaired(5);
		soldier.beRepaired(4);
		soldier.beRepaired(2);
		soldier.beRepaired(2);
	}
	std::cout << "\n\n\n";
	{
		ClapTrap soldier("soldier");
		soldier.takeDamage(9);
		soldier.takeDamage(2);
		soldier.takeDamage(2);
	}
}