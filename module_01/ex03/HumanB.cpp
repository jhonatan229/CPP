#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	HumanB::name = name;
}
HumanB::HumanB(std::string name, Weapon weapon){
	HumanB::name = name;
	HumanB::weapon = weapon;
}
void HumanB::setWeapon(Weapon weapon){
	HumanB::weapon = weapon;
}
void HumanB::attack(){
	std::cout << HumanB::name << " attacks with their " << HumanB::weapon.getType() << std::endl;
}