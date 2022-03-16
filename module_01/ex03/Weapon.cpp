#include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type){
	Weapon::type = type;
}

std::string Weapon::getType(){
	return Weapon::type;
}
void Weapon::setType(std::string newType){
	Weapon::type = newType;
}