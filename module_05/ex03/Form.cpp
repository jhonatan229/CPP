#include "./Form.hpp"

const unsigned int min = 150;
const unsigned int max = 1;

Form::Form(): _name("Default form"), _gradeToSign(120), _gradeToExec(130), _isSigned(false){
	std::cout << "Form default constructor called!\n";
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec):
_name(name), _isSigned(false){
	if (gradeToExec < max || gradeToSign < max)
		throw Form::GradeTooHighException();
	if (gradeToExec > min || gradeToSign > min)
		throw Form::GradeTooLowException();
	_gradeToSign = gradeToSign;
	_gradeToExec = gradeToExec;
	std::cout << "Form custom constructor called!\n";
}

Form::Form(const Form &copy): _name(copy.getName()){
	this->operator=(copy);
	std::cout << "Copy Form constructor called!\n";
}
Form *Form::operator=(const Form &assign){
	if(this != &assign){
		this->_gradeToSign = assign.getGradeToSign();
		this->_gradeToExec = assign.getGradeToExec();
		this->_gradeToSign = assign.getIsSigned();
	}
	*this = assign;
	std::cout << "Default Form operator called!\n";
	return this;
}

Form::~Form(){
	std::cout << "Default Form destructor called!\n";
}

std::string		Form::getName() const{return _name;}
unsigned int	Form::getGradeToSign() const{return _gradeToSign;}
unsigned int	Form::getGradeToExec() const{return _gradeToExec;}
bool			Form::getIsSigned() const{return _isSigned;}

void Form::beSigned(Bureaucrat boure) const {
	if (boure.getGrade()  > _gradeToSign){
		throw Form::GradeTooLowException();
	}
}

void	Form::execute(Bureaucrat const & executor) const{
	this->beSigned(executor);
	if (executor.getGrade() > this->getGradeToExec())
		throw Form::GradeTooLowToExecException();
	this->executeAction();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!!!");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!!!");
}

const char *Form::GradeTooLowToExecException::what() const throw()
{
	return ("Grade too low to exexute!!!");
}

std::ostream &operator<<(std::ostream& os, const Form& form){
	os << "Name form:        " << form.getName() << std::endl
	   << "Grade to signed:  " << form.getGradeToSign() << std::endl
	   << "Grade to Execute: " << form.getGradeToExec() << std::endl
	   << "Is Signed?:       " << form.getIsSigned() << std::endl;
	return os;
}