#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5)
{
	_target = "default target";
	std::cout << "PresidentialPardonForm default constructor called!\n";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("default", 25, 5)
{
	_target = target;
	std::cout << "PresidentialPardonForm custom constructor called!\n";
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm *copy) : Form("default", 25, 5)
{
	this->_target = copy->_target;
	std::cout << "PresidentialPardonForm Form constructor called!\n";
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
	std::cout << "Default PresidentialPardonForm operator called!\n";
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm destructor called!\n";
}

void PresidentialPardonForm::executeAction() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}