#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called!\n";
	_name = "Default FragTrap";
	_lifePoints = 100;
	_energiPoints = 100;
	_attackDamage = 30;
	_max_health = _lifePoints;
}
FragTrap::FragTrap(const std::string name)
{
	_name = name;
	_lifePoints = 100;
	_energiPoints = 100;
	_attackDamage = 30;
	_max_health = _lifePoints;
	std::cout << "Custom FragTrap constructor called!\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	this->operator=(copy);
	std::cout << "Copy FragTrap constructor called!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called!\n";
}
FragTrap &FragTrap::operator=(const FragTrap &assign)
{
	this->_name = assign._name;
	this->_lifePoints = assign._lifePoints;
	this->_energiPoints = assign._energiPoints;
	this->_attackDamage = assign._attackDamage;
	this->_max_health = assign._lifePoints;
	std::cout << "Operator FragTrap called!\n";
	return *this;
}
void FragTrap::highFivesGuys()
{
	std::cout << "HIGHFIVE EVERYBODYYYY!\n";
}
