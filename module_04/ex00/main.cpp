#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "./Dog.hpp"

int main(void)
{
	{
		Animal *meta = new Animal();
		Animal *j = new Dog();
		Animal *i = new Cat();
		WrongAnimal *catFake = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << catFake->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		catFake->makeSound();
		delete(catFake);
		delete(i);
		delete(j);
		delete(meta);
	}
}