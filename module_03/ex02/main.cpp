#include "FragTrap.hpp"

int main(void)
{
	FragTrap *trapper = new FragTrap("Fragie");
	trapper->attack("soldier");
	trapper->takeDamage(90);
	trapper->beRepaired(80);
	trapper->beRepaired(10);
	trapper->beRepaired(10);
	trapper->highFivesGuys();
	delete trapper;
}