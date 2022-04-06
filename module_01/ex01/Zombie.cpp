#include "Zombie.hpp"

Zombie::Zombie(){
	Zombie::name = "default zombie";
}
Zombie::Zombie(std::string name){
	Zombie::name = name;
}
Zombie::~Zombie(){
	std::cout << name << " is seeing a light . . ." << std::endl;
}
void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
void Zombie::setName(std::string name){
	Zombie::name = name;
}