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
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);
	~RobotomyRequestForm();
	void		execute(Bureaucrat const & executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP
