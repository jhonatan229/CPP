#if !defined(FORM_HPP)
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
private:
	const std::string	_name;
	const unsigned int	_gradeToSign;
	const unsigned int	_gradeToExec;
	bool				_isSigned;
	class GradeTooHighException : public std::exception
	{
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
			virtual const char *what() const throw();
	};

public:
	Form();
	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
	Form(const Form &copy);
	~Form();

	Form &operator=(const Form &assign);
	
	std::string		getName() const;
	unsigned int	getGradeToSign() const;
	unsigned int	getGradeToExec() const;
	bool			getIsSigned() const;
	void			beSigned(Bureaucrat const & boure);
};

std::ostream &operator<<(std::ostream& os, const Form& beru);

#endif // FORM_HPP
