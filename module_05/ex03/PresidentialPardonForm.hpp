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
	PresidentialPardonForm(const PresidentialPardonForm *copy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);
	~PresidentialPardonForm();
	void		executeAction() const;
};

#endif // PRESIDENTIALPARDONFORM_HPP