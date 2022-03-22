#include "./Cat.hpp"
#include "./Dog.hpp"

int main(void)
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j; // should not create a leak
		delete i;	
	}
	std::cout << "\n\n\n";
	{
		Animal **arr = new Animal*[4];
		for(int i = 0; i < 2; i++)
			arr[i] = new Cat();
		for(int i = 2; i < 4; i++)
			arr[i] = new Dog();
		for (int i = 0; i < 4; i++)
			delete arr[i];
		delete []arr;
	}
	std::cout << "\n\n\n";
	{
		Cat *mind = new Cat();
		for(int i = 0; i < 5; i++){
			mind->setIdea(i, "aninha");
		}
		for(int i = 0; i < 5; i++){
			std::cout << mind->getIdea(i) << std::endl;
		}
		delete mind;
	}
}