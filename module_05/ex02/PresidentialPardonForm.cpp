#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialForm", 25, 5)
{
	_target = "default target";
	std::cout << "PresidentialPardonForm default constructor called!\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", 25, 5)
{
	_target = target;
	std::cout << "PresidentialPardonForm custom constructor called!\n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form("PresidentialForm", 25, 5)
{
	this->operator=(copy);
	std::cout << "PresidentialPardonForm Form constructor called!\n";
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	this->_target = assign._target;
	std::cout << "Default PresidentialPardonForm operator called!\n";
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor called!\n";
}

void PresidentialPardonForm::executeAction(Bureaucrat const & executor ) const
{
	if (this->mayExecute(executor) == true)
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}