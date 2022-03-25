#include "./Bureaucrat.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main(void)
{
	{
		std::cout << "\n///////TEST ROBOTOMY//////////\n";
		Bureaucrat validburo(10, "president");
		Bureaucrat invalidburo(50, "governor");
		Form *robo = new RobotomyRequestForm("robotinic");
		validburo.executeForm(*robo);
		std::cout << "\n\n\n\n";
		invalidburo.executeForm(*robo);
		delete robo;
	}
	{
		std::cout << "\n///////TEST SHRUBBERY//////////\n";
		Bureaucrat validburo(10, "president");
		Bureaucrat invalidburo(140, "governor");
		Form *robo = new ShrubberyCreationForm("old tree");
		validburo.executeForm(*robo);
		std::cout << "\n\n\n\n";
		invalidburo.executeForm(*robo);
		delete robo;
	}
	{
		std::cout << "\n///////TEST PRESIDENTIAL//////////\n";
		Bureaucrat validburo(1, "president");
		Bureaucrat invalidburo(10, "governor");
		Form *robo = new PresidentialPardonForm("Pardon");
		validburo.executeForm(*robo);
		std::cout << "\n\n\n\n";
		invalidburo.executeForm(*robo);
		delete robo;
	}
}