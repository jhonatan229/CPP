#if !defined(BUREAUCRAT_HPP)
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

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
};

std::ostream &operator<<(std::ostream& os, const Bureaucrat& beru);

#endif // BUREAUCRAT_HPP
