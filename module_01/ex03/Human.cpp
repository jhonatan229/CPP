#include "Human.hpp"

Human::Human(){}
Human::~Human(){}
void Human::setWeapon(Weapon weapon){
	Human::weapon = weapon;
}
void Human::attack(){
	std::cout << Human::name << " attacks with their " << Human::weapon.getType() << std::endl;
}