#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
	HumanA::name = name;
	HumanA::weapon = &weapon;
}
void HumanA::setWeapon(Weapon &weapon){
	HumanA::weapon = &weapon;
	return;
}
void HumanA::attack(){
	std::cout << HumanA::name << " attacks with their " << this->weapon->getType() << std::endl;
}