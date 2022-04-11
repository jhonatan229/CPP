#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Scavtrap constructor called!\n";
	_lifePoints = 100;
	_energiPoints = 50;
	_attackDamage = 20;
	_max_health = _lifePoints;
}
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	_name = name;
	_lifePoints = 100;
	_energiPoints = 50;
	_attackDamage = 20;
	_max_health = _lifePoints;
	std::cout << "Custom ScavTrap constructor called!\n";
}
ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->operator=(copy);
	std::cout << "Copy ScavTrap constructor called!\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called!\n";
}
ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	this->_name = assign._name;
	this->_lifePoints = assign._lifePoints;
	this->_energiPoints = assign._energiPoints;
	this->_attackDamage = assign._attackDamage;
	this->_max_health = assign._lifePoints;
	std::cout << "Oerator ScavTrap called!\n";
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_lifePoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is already dead!\n";
		return;
	}
	if (_energiPoints == 0)
	{
		std::cout << "You don't have enough energy to attack!\n";
		return;
	}
	_energiPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " point(s) of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode\n";
}