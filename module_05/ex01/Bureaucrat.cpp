#include "./Bureaucrat.hpp"

const unsigned int min = 150;
const unsigned int max = 1;

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat")
{
	_grade = 75;
	std::cout << "Bureaucrat default constructor called!\n";
}
Bureaucrat::Bureaucrat(unsigned int grade, std::string name) : _name(name), _grade(grade)
{
	if (_grade <= max)
		throw(Bureaucrat::GradeTooHighException());
	else if(_grade >= min)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << "Bureaucrat custom constructor called!\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name("Default Bureaucrat")
{
	this->operator=(copy);
	std::cout << "Copy Bureaucrat constructor called!\n";
}
Bureaucrat *Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
	{
		this->_grade = assign._grade;
	}
	std::cout << "Default Bureaucrat operator called!\n";
	return this;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called!\n";
}

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::addGrade()
{
	if (_grade == max)
		throw(Bureaucrat::GradeTooHighException());
	_grade--;
}
void Bureaucrat::degrementGrade()
{
	if (_grade == min)
		throw(Bureaucrat::GradeTooLowException());
	_grade++;
}

void Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
		if (form.getIsSigned() == true)
			std::cout << _name << " signed " << form.getName();
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!!!");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!!!");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &beru)
{
	os << beru.getName() << ", bureaucrat grade " << beru.getGrade();
	return os;
}