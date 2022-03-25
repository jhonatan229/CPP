#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45)
{
	_target = "default target";
	std::cout << "RobotomyRequestForm default constructor called!\n";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("default", 72, 45)
{
	_target = target;
	std::cout << "RobotomyRequestForm custom constructor called!\n";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm *copy) : Form("default", 72, 45)
{
	this->_target = copy->_target;
	std::cout << "Copy RobotomyRequestForm constructor called!\n";
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	if (this != &assign)
		*this = assign;
	return *this;
	std::cout << "Default RobotomyRequestForm operator called!\n";
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm destructor called!\n";
}

void RobotomyRequestForm::executeAction() const
{
	srand (time(NULL));
	int num = rand() % 10 + 1;
	if (num % 2 == 0)
		std::cout << _target << " has been robotomized\n";
	else
		std::cout << "robotomy in " << _target << " failed.\n";
}