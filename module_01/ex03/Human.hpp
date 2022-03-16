#if !defined(HUMAN_HPP)
#define HUMAN_HPP

#include "Weapon.hpp"

class Human
{
protected:
	std::string name;
	Weapon weapon;

public:
	Human();
	void setWeapon(Weapon weapon);
	void attack();
	~Human();
};

#endif // HUMAN_HPP
