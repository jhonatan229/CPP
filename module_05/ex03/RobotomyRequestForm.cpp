#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyForm", 72, 45)
{
	_target = "default target";
	std::cout << "RobotomyRequestForm default constructor called!\n";
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45)
{
	_target = target;
	std::cout << "RobotomyRequestForm custom constructor called!\n";
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form("RobotomyForm", 72, 45)
{
	this->operator=(copy);
	std::cout << "Copy RobotomyRequestForm constructor called!\n";
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	this->_target = assign._target;
	std::cout << "Default RobotomyRequestForm operator called!\n";
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm destructor called!\n";
}

void RobotomyRequestForm::executeAction(Bureaucrat const &executor) const
{
	if (this->mayExecute(executor) == true)
	{
		srand(time(NULL));
		int num = rand() % 10 + 1;
		if (num % 2 == 0)
			std::cout << _target << " has been robotomized\n";
		else
			std::cout << "robotomy in " << _target << " failed.\n";
	}
}