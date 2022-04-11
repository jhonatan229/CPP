#include "./DiamondTrap.hpp"

int    main( void )
{
    DiamondTrap jhow = (DiamondTrap("Jhow"));
	std::cout << "\n\n";
    DiamondTrap rubi = (DiamondTrap(jhow));
    std::cout << std::endl;

    jhow.attack("'O tal do 17'");
    jhow.ClapTrap::attack("'O tal do 17'");
    jhow.takeDamage(70);
    jhow.beRepaired(70);

    std::cout << std::endl;

    jhow.highFivesGuys();

    std::cout << std::endl;

    jhow.takeDamage(70);
    jhow.takeDamage(70);

    std::cout << std::endl;

    jhow.beRepaired(70);
    jhow.attack("'O tal do 17'");

    std::cout << std::endl;

    return (0);
}