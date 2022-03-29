#if !defined(INTERN_HPP)
#define INTERN_HPP

#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
private:
	Form &presidential(std::string targetName);
	Form &shrubbery(std::string targetName);
	Form &robotomy(std::string targetName);
	class typeNameException : public std::exception
	{
			virtual const char *what() const throw();
	};
	class targateNameException : public std::exception
	{
			virtual const char *what() const throw();
	};
public:
	Intern();
	Form *makeForm(std::string form_type, std::string target);
	~Intern();
};

#endif // INTERN_HPP
