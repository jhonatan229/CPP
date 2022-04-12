#include "./Bureaucrat.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << "Execução Shrubberry! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da bom!" << std::endl;
		ShrubberyCreationForm form("Art");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da bom!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Tess");
		Bureaucrat grade = Bureaucrat(150, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruim!" << std::endl;
		ShrubberyCreationForm form("Grey");
		Bureaucrat grade = Bureaucrat(150, "Grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Robotomy! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "Esse talvez vai da bom!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse talvez vai da bom!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruim!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat(150, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruim!" << std::endl;
		RobotomyRequestForm form("Robo");
		Bureaucrat grade = Bureaucrat(150, "Grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Execução Presidential! " << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << "Esse vai da bom!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da bom!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat(1, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruimmm!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat(150, "Grey");
		form.beSigned(grade);
		form.executeAction(grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Esse vai da ruimmm!" << std::endl;
		PresidentialPardonForm form("Pardon");
		Bureaucrat grade = Bureaucrat(150, "grey");
		form.beSigned(grade);
		grade.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}