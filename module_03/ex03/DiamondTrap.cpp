#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	this->_name = "default diamount";
	this->_lifePoints = FragTrap::_lifePoints;
	this->_energiPoints = ScavTrap::_energiPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_max_health = ScavTrap::_max_health;
	std::cout << "Default DiamondTrap constructor called\n";
}
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_lifePoints = FragTrap::_lifePoints;
	this->_energiPoints = ScavTrap::_energiPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_max_health = ScavTrap::_max_health;
	std::cout << "DiamondTrap custom constructor called\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	this->operator=(copy);
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap descructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
	this->_name = assign._name;
	this->_attackDamage = assign._attackDamage;
	this->_energiPoints = assign._energiPoints;
	this->_lifePoints = assign._lifePoints;
	this->_max_health = assign._max_health;
	return *this;
}