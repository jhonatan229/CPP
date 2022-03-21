#if !defined(CLAPTRAP_HPP)
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string 	_name;
	unsigned int	_lifePoints;
	unsigned int	_energiPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &assign);

	std::string getName() const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP
