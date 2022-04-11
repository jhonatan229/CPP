#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default ClapTrap"), _lifePoints(10), _energiPoints(10), 
_attackDamage(0), _max_health(10)
{
	std::cout << "Default Claptrap constructor called!\n";
}
ClapTrap::ClapTrap(const std::string name): _name(name), _lifePoints(10), _energiPoints(10), 
_attackDamage(0), _max_health(10)
{
	std::cout << "Custom ClapTrap constructor called!\n";
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->operator=(copy);
	std::cout << "Copy ClapTrap constructor called!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called!\n";
}
ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->_name = assign._name;
	this->_lifePoints = assign._lifePoints;
	this->_energiPoints = assign._energiPoints;
	this->_attackDamage = assign._attackDamage;
	this->_max_health = assign._lifePoints;
	std::cout << "operator ClapTrap called!\n";
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energiPoints == 0)
	{
		std::cout << "You don't have enough energy to attack!\n";
		return;
	}
	if (_lifePoints <= 0)
	{
		std::cout << _name << " is dead!\n";
		return;
	}
	_energiPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " point(s) of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;
	if (_lifePoints <= 0)
	{
		std::cout << _name << " is already dead!\n";
		return;
	}
	if (amount >= _lifePoints)
	{
		damage = _lifePoints;
		_lifePoints = 0;
	}
	else
	{
		damage = amount;
		_lifePoints -= amount;
	}
	std::cout << "ClapTrap " << _name << " takes " << damage << " of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_lifePoints <= 0)
	{
		std::cout << _name << " is already dead!\n";
		return;
	}
	if (_energiPoints == 0)
	{
		std::cout << "You don't have enough energy to repair!\n";
		return;
	}
	if (_lifePoints == _max_health)
	{
		std::cout << "You don't need to health\n";
		return;
	}
	_energiPoints--;
	if (amount + _lifePoints > _max_health)
	{
		std::cout << "ClapTrap " << _name << " recover " << (10 - _lifePoints) << " of health!\n";
		_lifePoints = _max_health;
	}
	else
	{
		_lifePoints += amount;
		std::cout << "ClapTrap " << _name << " recover " << amount << " of health!\n";
	}
}