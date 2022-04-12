#include "./Form.hpp"

const unsigned int min = 150;
const unsigned int max = 1;

Form::Form() : _name("Default form"), _gradeToSign(120), _gradeToExec(130), _isSigned(false)
{
	std::cout << "Form default constructor called!\n";
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _name(name), _gradeToSign(gradeToSign),
																				   _gradeToExec(gradeToExec), _isSigned(false)
{
	if (this->_gradeToExec < max || this->_gradeToSign < max)
		throw Form::GradeTooHighException();
	if (this->_gradeToExec > min || this->_gradeToSign > min)
		throw Form::GradeTooLowException();
	std::cout << "Form custom constructor called!\n";
}

Form::Form(const Form &copy) : _name(copy.getName()),
							   _gradeToSign(copy.getGradeToSign()), _gradeToExec(copy.getGradeToExec())
{
	this->operator=(copy);
	std::cout << "Copy Form constructor called!\n";
}
Form &Form::operator=(const Form &assign)
{
	this->_isSigned = assign.getIsSigned();
	std::cout << "Default Form operator called!\n";
	return *this;
}

Form::~Form()
{
	std::cout << "Default Form destructor called!\n";
}

std::string Form::getName() const { return _name; }
unsigned int Form::getGradeToSign() const { return _gradeToSign; }
unsigned int Form::getGradeToExec() const { return _gradeToExec; }
bool Form::getIsSigned() const { return _isSigned; }

void Form::beSigned(Bureaucrat const &boure)
{
	if (boure.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

bool Form::mayExecute(Bureaucrat const & executor) const{
	if (this->_isSigned == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->_gradeToExec)
		throw Form::GradeTooLowException();
	return (true);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!!!");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!!!");
}

const char *Form::FormNotSignedException::what() const throw()
{
	return ("Form is not signed!!!");
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name form:        " << form.getName() << std::endl
	   << "Grade to signed:  " << form.getGradeToSign() << std::endl
	   << "Grade to Execute: " << form.getGradeToExec() << std::endl
	   << "Is Signed?:       " << form.getIsSigned() << std::endl;
	return os;
}