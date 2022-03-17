#include "util.hpp"

int main(void){
	{
		Zombie zombie("claudinho");
		zombie.announce();
	}
	{
		Zombie *zombie = newZombie("rubinho");
		zombie->announce();
		delete zombie;
	}
	{
		randomChump("murilinho");
	}
	return (0);
}