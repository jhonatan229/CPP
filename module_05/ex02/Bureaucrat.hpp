#if !defined(BUREAUCRAT_HPP)
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "./Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string  _name;
	unsigned int _grade;
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

public:
	Bureaucrat();
	Bureaucrat(unsigned int grade, std::string name);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat *operator=(const Bureaucrat &assign);
	~Bureaucrat();
	std::string getName() const;
	unsigned int getGrade() const;
	void addGrade();
	void degrementGrade();

	void	signForm(Form & form);
	void	executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& rhs);

#endif // BUREAUCRAT_HPP
