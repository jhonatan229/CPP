#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default Scavtrap constructor called!\n";
	_name = "Default ScavTrap";
	_lifePoints = 100;
	_energiPoints = 50;
	_attackDamage = 20;
	_max_health = _lifePoints;
}
ScavTrap::ScavTrap(const std::string name)
{
	_name = name;
	_lifePoints = 100;
	_energiPoints = 50;
	_attackDamage = 20;
	_max_health = _lifePoints;
	std::cout << "Custom ScavTrap constructor called!\n";
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	_name = copy.getName();
	std::cout << "Copy constructor called!\n";
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called!\n";
}
ScavTrap &ScavTrap::operator=(const ScavTrap &assign){
	this->_name = assign.getName();
	return *this;
	std::cout << "Default ScavTrap destructor called!\n";
}

void ScavTrap::attack(const std::string &target)
{
	unsigned int damage;
	if (_energiPoints == 0)
	{
		std::cout << "You don't have enough energy to attack!\n";
		return;
	}
	if (_attackDamage > _energiPoints)
	{
		damage = _energiPoints;
		_energiPoints = 0;
	}
	else
	{
		damage = _attackDamage;
		_energiPoints -= _attackDamage;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << damage << " point(s) of damage!\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode\n";
}