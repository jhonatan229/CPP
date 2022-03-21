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

FragTrap::FragTrap(const FragTrap &copy)
{
	_name = copy.getName();
	std::cout << "Copy constructor called!\n";
}
FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called!\n";
}

FragTrap &FragTrap::operator=(const FragTrap &assign){
	this->_name = assign.getName();
	return *this;
	std::cout << "Default FragTrap destructor called!\n";
}

void FragTrap::highFivesGuys(){
	std::cout << "HIGHFIVE EVERYBODYYYY!\n";
}
