#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called!\n";
	_name = "Default ClapTrap";
	_lifePoints = 10;
	_energiPoints = 10;
	_attackDamage = 1;
}
ClapTrap::ClapTrap(const std::string name)
{
	_name = name;
	_lifePoints = 10;
	_energiPoints = 10;
	_attackDamage = 0;
	std::cout << "Custom constructor called!\n";
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	_name = copy.getName();
	std::cout << "Copy constructor called!\n";
}
ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called!\n";
}
ClapTrap &ClapTrap::operator=(const ClapTrap &assign)
{
	this->_name = assign.getName();
	return *this;
	std::cout << "ClapTrap operator called!\n";
}

std::string ClapTrap::getName() const
{
	return _name;
}

void ClapTrap::attack(const std::string &target)
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
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << damage << " point(s) of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;
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
	if (_energiPoints == 0)
	{
		std::cout << "You don't have enough energy to repair!\n";
		return;
	}
	if (_lifePoints == 10)
	{
		std::cout << "You don't need to health\n";
		return;
	}
	unsigned int recover;
	if (amount >= _energiPoints)
	{
		recover = _energiPoints;
		_energiPoints = 0;
	}
	else
	{
		recover = amount;
		_energiPoints -= amount;
	}
	if (recover + _lifePoints > 10)
	{
		_lifePoints = 10;
		std::cout << "ClapTrap " << _name << " recover " << (10 - _lifePoints) << " of health!\n";
	}
	else
	{
		std::cout << "ClapTrap " << _name << " recover " << recover << " of health!\n";
		_lifePoints += recover;
	}
}