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
	class FormNotSignedException : public std::exception {
		virtual const char* what( void ) const throw();
	};

public:
	Form();
	Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec);
	Form(const Form &copy);
	virtual ~Form();

	Form &operator=(const Form &assign);
	
	std::string		getName() const;
	unsigned int	getGradeToSign() const;
	unsigned int	getGradeToExec() const;
	bool			getIsSigned() const;
	void			beSigned(Bureaucrat const & boure);

	bool			mayExecute( Bureaucrat const & executor ) const ;
	virtual void	executeAction(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream& os, const Form& beru);

#endif // FORM_HPP
