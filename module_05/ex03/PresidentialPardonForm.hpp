#if !defined(PRESIDENTIALPARDONFORM_HPP)
#define PRESIDENTIALPARDONFORM_HPP

#include "./Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
	~PresidentialPardonForm();
	void		execute( Bureaucrat const & executor ) const;
};

#endif // PRESIDENTIALPARDONFORM_HPP