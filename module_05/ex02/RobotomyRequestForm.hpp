#if !defined(ROBOTOMYREQUESTFORM_HPP)
#define ROBOTOMYREQUESTFORM_HPP

#include "./Form.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm *copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
	~RobotomyRequestForm();
	void		executeAction() const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
