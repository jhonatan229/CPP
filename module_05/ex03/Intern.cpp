#include "./Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called!\n";
}
Intern::~Intern()
{
	std::cout << "Intern default destructor called!\n";
}

Form &Intern::presidential(std::string targetName)
{
	Form *pardon = new PresidentialPardonForm(targetName);
	return *pardon;
}
Form &Intern::shrubbery(std::string targetName)
{
	Form *berry = new ShrubberyCreationForm(targetName);
	return *berry;
}
Form &Intern::robotomy(std::string targetName)
{
	Form *roboto = new RobotomyRequestForm(targetName);
	return *roboto;
}

const char *Intern::typeNameException::what() const throw(){
	return "the type of form doesn't not exist!\n";
}

const char *Intern::targateNameException::what() const throw(){
	return "the target doesn't not exist!\n";
}

Form *Intern::makeForm(std::string form_type, std::string target)
{
	if (target.empty())
		throw Intern::targateNameException();
	Form &(Intern::*ptfptr[])(std::string) = {&Intern::robotomy, &Intern::shrubbery, &Intern::presidential};
	std::string levels[] = {"robotomy request", "shrubbery request", "presidential request"};
	int i = 0;
	while (i < 3)
	{
		if (levels[i] == form_type)
			return &(this->*ptfptr[i])(target);
		i++;
	}
	throw Intern::typeNameException();
}