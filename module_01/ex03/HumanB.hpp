#if !defined(HUMAMB_HPP)
#define HUMAMB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	void setWeapon(Weapon weapon);
	void attack();
};

#endif // HUMAMB_HPP
