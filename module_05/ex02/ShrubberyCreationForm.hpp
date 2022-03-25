#if !defined(SHRUBBERYCREATIONFORM_HPP)
#define SHRUBBERYCREATIONFORM_HPP

#include "./Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm *copy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);
	~ShrubberyCreationForm();
	void		executeAction() const;
};

#endif // SHRUBBERYCREATIONFORM_HPP
