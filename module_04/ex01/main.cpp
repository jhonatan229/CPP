#include "./Cat.hpp"
#include "./Dog.hpp"

void	brains(void) {
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}
	
	std::cout  << " VAMO VE OQ ACONTECE\n"<< std::endl;
	
	{
		int len = 4;
		Animal **animals = new Animal*[len];
		
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}

		for (size_t i = 0; i < 4; i++)
		{
			delete animals[i];
		}
		std::cout <<"\n\n\n" << std::endl;

		delete [] animals;
	}
	
}

void	deep_or_shallow(void) {
	Cat* Cat1 = new Cat();
	std::cout << std::endl;

	Cat1->setIdea(0, "Derruba as parada");
	std::cout << "Ideia 1 = " << Cat1->getIdea(0) << "\n";


	Cat* Cat2 = new Cat(*Cat1);
	//Cat2 = new Cat(*Cat1);

	std::cout << "Ideia 2 = " << Cat2->getIdea(0) << "\n";
	Cat2->setIdea(0, "Ser um bom gatinho");
	std::cout << std::endl;


	std::cout
		<< "Ideia final 1 = " << Cat1->getIdea(0) << std::endl
		<< "Ideia final 2 = " << Cat2->getIdea(0) << std::endl;

	delete Cat1;
	delete Cat2;
}

int		main(void) {
	brains();
	deep_or_shallow();
	return (0);
}